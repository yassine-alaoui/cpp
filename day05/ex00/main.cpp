# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat test0("Intitled", 0);
	Bureaucrat test("yassine", 2);
	Bureaucrat test1("ahmed", 150);

	test.incrementGrade();
	std::cout << test;
	test.incrementGrade();
	std::cout << test << " ---------- \n";
	std::cout << test1;
	test1.decrementGrade();
	std::cout << test1;
}