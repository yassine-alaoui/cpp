/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 12:32:07 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:06:28 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <iostream>
# include <fstream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & val);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & val);
		virtual void execute(Bureaucrat const & executor) const;
		virtual ~ShrubberyCreationForm() {}
};

#endif