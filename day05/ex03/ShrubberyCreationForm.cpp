/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 12:49:59 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:30:08 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 0, 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & val) : Form(val._target, 0, 145, 137)
{
	*this = val;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & val)
{
	this->_target = val._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		if (executor.getgrade() > Form::getGradeToExecute())
			throw Form::GradeTooLowException();
		else
		{
			std::ofstream myfile;
			std::string tmp;

			tmp = _target + "_shrubbery";
			myfile.open(tmp, std::ios::out);
			myfile << "\
						██████████████████████████\n\
						▌════════════════════════▐\n\
						▌══▄▄▓█████▓▄═════▄▄▓█▓▄═▐\n\
						▌═▄▓▀▀▀██████▓▄═▄▓█████▓▌▐\n\
						▌═══════▄▓███████████▓▀▀▓▐\n\
						▌═══▄▓█████████▓████▓▄═══▐\n\
						▌═▄▓████▓███▓█████████▓▄═▐\n\
						▌▐▓██▓▓▀▀▓▓███████▓▓▀▓█▓▄▐\n\
						▌▓▀▀════▄▓██▓██████▓▄═▀▓█▐\n\
						▌══════▓██▓▀═██═▀▓██▓▄══▀▐\n\
						▌═════▄███▀═▐█▌═══▀▓█▓▌══▐\n\
						▌════▐▓██▓══██▌═════▓▓█══▐\n\
						▌════▐▓█▓══▐██═══════▀▓▌═▐\n\
						▌═════▓█▀══██▌════════▀══▐\n\
						▌══════▀═══██▌═══════════▐\n\
						▌═════════▐██▌═══════════▐\n\
						▌═════════▐██════════════▐\n\
						▌═════════███════════════▐\n\
						▌═════════███════════════▐\n\
						▌════════▐██▌════════════▐\n\
						▌▓▓▓▓▓▓▓▓▐██▌▓▓▓▓▓▓▓▓▓▓▓▓▐\n\
						▌▓▓▓▓▓▓▓▓▐██▌▓▓▓▓▓▓▓▓▓▓▓▓▐\n\
						▌▓▓▓▓▓▄▄██████▄▄▄▓▓▓▓▓▓▓▓▐\n\
						██████████████████████████\n";
			myfile.close();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}
