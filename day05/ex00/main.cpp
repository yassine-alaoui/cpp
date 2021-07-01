# include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test0("Intitled", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat test("yassine", 2);
	Bureaucrat test1("ahmed", 150);

	try
	{
		test.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << test;
	try
	{
		test.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << test << " ---------- \n";
	std::cout << test1;
	try
	{
		test1.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << test1;
}