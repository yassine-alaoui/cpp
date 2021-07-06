#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <list>
# include <vector>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator end() {return this->c.end();}
		iterator begin() {return this->c.begin();}
		MutantStack(/* args */) {}
		~MutantStack() {}
};

#endif