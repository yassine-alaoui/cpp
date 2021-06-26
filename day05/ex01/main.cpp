# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	test0("Intitled", 0);
	Bureaucrat	test("yassine", 2);
	Bureaucrat	test1("ahmed", 150);
	Form		form("lol", 0, 5, 2);
	Form		form1("lore", 0, 100, 1);

	test.incrementGrade();
	std::cout << test;
	test.incrementGrade();
	std::cout << test << " ---------- \n";
	std::cout << test1;
	test1.decrementGrade();
	std::cout << test1;
	form.beSigned(test);
	form.beSigned(test1);
	form1.beSigned(test1);
	std::cout << form;
}