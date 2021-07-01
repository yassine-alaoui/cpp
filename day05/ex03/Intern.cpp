/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:32:40 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/07/01 10:36:13 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	forms[0] = "presidentialpardonform";
	forms[1] = "robotomyrequestform";
	forms[2] = "shrubberycreationform";
	forms[3] = "\0";
}

Intern::Intern(Intern const & val)
{
	(void)val;
	*this = val;
}

Intern & Intern::operator=(Intern const & val)
{
	(void)val;
	return *this;
}

Form * Intern::makeForm(std::string form, std::string target)
{
	std::string	tmp;

	toForms[0] = new PresidentialPardonForm(target);
	toForms[1] = new RobotomyRequestForm(target);
	toForms[2] = new ShrubberyCreationForm(target);
	toForms[3] = 0;
	tmp = form;
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	for (int j = 0; j < (int)tmp.length(); j++)
		tmp[j] = tolower(tmp[j]);
	tmp += "form";
	for (int i = 0; i < 3; i++)
	{
		if (tmp == forms[i])
			return toForms[i];
	}
	std::cerr << "Faild to Creat!" << "\n";
	return 0;
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete toForms[i];
}