/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:57:54 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:37:06 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 0, 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & val) : Form(val._target, 0, 25, 5)
{
	*this = val;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & val)
{
	this->_target = val._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		if (executor.getgrade() > Form::getGradeToExecute())
			throw Form::GradeTooLowException();
		else
			std::cout << _target << "  has been pardoned by Zafod Beeblebrox\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}
