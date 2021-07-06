# include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << " ------ " << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << " ------ " << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << " ------ " << std::endl;
	MutantStack<char> cstack;
	cstack.push('a');
	cstack.push('b');
	cstack.push('c');
	MutantStack<char>::iterator cit = cstack.begin();
	MutantStack<char>::iterator cite = cstack.end();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	return 0;
}