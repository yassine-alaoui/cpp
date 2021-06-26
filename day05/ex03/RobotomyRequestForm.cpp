/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:35:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:36:19 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 0, 75, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & val) : Form(val._target, 0, 75, 45)
{
	*this = val;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & val)
{
	this->_target = val._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		if (executor.getgrade() > Form::getGradeToExecute())
			throw Form::GradeTooLowException();
		else
		{
			srand (time(NULL));
			bool truefalse = (rand() % 2) != 0;

			if (truefalse)
				std::cout << "* drilling noises *\n" << _target << " has been robotomized successfully\n";
			else
				std::cout << "Failed to robotomiz " << _target << "\n";
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}