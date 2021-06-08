/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:58:12 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/06 17:46:15 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>


# define cout std::cout
# define endl std::endl
# define string std::string

int main()
{
	string str;
	string *box = &str;
	string &boxbox = str;

	str = "HI THIS IS BRAIN";
	cout << *box << endl << boxbox << endl;
}
