/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:17:32 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/25 15:39:49 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	private:
		std::string const	_name;
		bool		const	_signed;
		unsigned int		_minGradetosign;
		unsigned int		_minGradetoexecute;
}

#endif