/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:41:08 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/25 15:11:03 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

std::ostream	&operator << (std::ostream &output, Bureaucrat const& val)
{
	output << val.getname() << ", bureaucrat grade " << val.getgrade() << "\n";
	return output;
}

std::string 	Bureaucrat::getname(void) const
{
	return _name;
}

unsigned int 		Bureaucrat::getgrade(void) const
{
	return _grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}

void				Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void				Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
		{
			_grade = grade;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& val)
{
	*this = val;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const& val)
{
	this->_grade = val._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}
