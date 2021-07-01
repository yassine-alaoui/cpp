# include "Class.hpp"

Base * generate(void)
{
	int i = 0;

	srand (time(NULL));
	i = rand() % 3 + 1;
	if (i == 1)
		return new A;
	if (i == 2)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	A* x = dynamic_cast<A*>(p);
	if (x)
		std::cout << "Pointer identify : " << "A" << "\n";
	B* y = dynamic_cast<B*>(p);
	if (y)
		std::cout << "Pointer identify : " << "B" << "\n";
	C* z = dynamic_cast<C*>(p);
	if (z)
		std::cout << "Pointer identify : " << "C" << "\n";
}

void identify(Base& p)
{
	try
	{
		A &x = dynamic_cast<A&>(p);
		(void)x;
		std::cout << "Refrence identify : " << "A" << "\n";
	}
	catch(const std::exception& e)
	{
		try
		{
			B &y = dynamic_cast<B&>(p);
			(void)y;
			std::cout << "Refrence identify : " << "B" << "\n";
		}
		catch(const std::exception& e)
		{
			C &z = dynamic_cast<C&>(p);
			(void)z;
			std::cout << "Refrence identify : " << "C" << "\n";
		}
	}
}

int main()
{
	Base *tmp;

	tmp = generate();
	identify(tmp);
	identify(*tmp);
}