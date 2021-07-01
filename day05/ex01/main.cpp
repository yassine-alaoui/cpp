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
	Bureaucrat	test("yassine", 2);
	Bureaucrat	test1("ahmed", 150);
	try
	{
		Form Notworking("fail", 0, 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form		form("lol", 0, 5, 2);
	Form		form1("lore", 0, 100, 1);

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
	std::cout << test1 << " ---------- \n";
	std::cout << " ---------- \n";
	test1.signForm(form);
	std::cout << form;
	std::cout << " ---------- \n";
	test.signForm(form);
	std::cout << form;
}