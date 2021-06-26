/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:56:59 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:06:22 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include <iostream>
# include <fstream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & val);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & val);
		virtual void execute(Bureaucrat const & executor) const;
		virtual ~PresidentialPardonForm() {}
};

#endif