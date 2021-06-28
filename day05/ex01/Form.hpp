/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:17:32 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/28 13:00:09 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string			_name;
		bool				_signed;
		unsigned int const	_minGradetosign;
		unsigned int const	_minGradetoexecute;
		Form();
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class AlreadySigned : public std::exception
		{
			virtual const char *what() const throw();
		};
		Form(std::string name, bool sign, unsigned int mintosign, unsigned int mintoexecute);
		Form(Form const & val);
		Form & 				operator=(Form const & val);
		std::string 		getName() const;
		bool				getStat() const;
		unsigned int 		getGradeToSign() const;
		unsigned int		getGradeToExecute() const;
		void				beSigned(Bureaucrat const& val);
};

std::ostream	&operator << (std::ostream &output, Form const& val);

#endif