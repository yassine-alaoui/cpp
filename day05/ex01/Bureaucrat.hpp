/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:42:03 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/25 15:12:46 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;
		Bureaucrat(void);
	public:
		class GradeTooHigh : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Grade too High!";
			}
		};
		class GradeTooLow : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Grade too Low!";
			}
		};
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const& val);
		Bureaucrat & operator=(Bureaucrat const& val);
		std::string 		getname(void) const;
		unsigned int  		getgrade(void) const;
		void				incrementGrade();
		void				decrementGrade();
		~Bureaucrat();
};

std::ostream	&operator << (std::ostream &output, Bureaucrat const& val);

#endif