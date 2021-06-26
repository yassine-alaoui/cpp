/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:34:55 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 15:13:45 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <time.h>

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & val);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & val);
		virtual void execute(Bureaucrat const & executor) const;
		virtual ~RobotomyRequestForm() {}
};

#endif