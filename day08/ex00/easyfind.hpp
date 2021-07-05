#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <list>

template<typename T>
typename T::iterator easyfind(T  & ptr, int num)
{
	std::list<int>::iterator thenum = find(ptr.begin(), ptr.end(), num);
	if (thenum != ptr.end())
		return (thenum);
	throw std::exception();
}

#endif