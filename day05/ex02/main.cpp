# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

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
	ShrubberyCreationForm form("home");
	RobotomyRequestForm form1("mohammed");
	PresidentialPardonForm form2("abdo");

	std::cout << form;
	test.executeForm(form);
	test.signForm(form);
	test.signForm(form);
	std::cout << form;
	test.executeForm(form);
	std::cout << " ---------- \n";
	std::cout << form1;
	test.executeForm(form1);
	test.signForm(form1);
	std::cout << form1;
	test.executeForm(form1);
	std::cout << " ---------- \n";
	std::cout << form2;
	test.executeForm(form2);
	test.signForm(form2);
	std::cout << form2;
	test.executeForm(form2);
}