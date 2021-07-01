# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

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
	Bureaucrat				test("yassine", 2);
	Intern					hamid;
	Form*					tmp;

	std::cout << " ---------- \n";
	tmp = hamid.makeForm("robotomy request", "testform");
	test.executeForm(*tmp);
	test.signForm(*tmp);
	test.executeForm(*tmp);
}