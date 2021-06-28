# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Bureaucrat	test0("Intitled", 0);
	Bureaucrat	test("yassine", 2);
	Bureaucrat	test1("ahmed", 150);
	ShrubberyCreationForm form("home");
	RobotomyRequestForm form1("mohammed");
	PresidentialPardonForm form2("abdo");
	Intern		hamid;
	Form*		tmp;

	test.incrementGrade();
	std::cout << test;
	test.incrementGrade();
	std::cout << test << " ---------- \n";
	std::cout << test1;
	test1.decrementGrade();
	std::cout << test1;
	std::cout << " ---------- \n";
	std::cout << form;
	test.executeForm(form);
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
	std::cout << " ---------- \n";
	tmp = hamid.makeForm("robotomy request", "testform");
	test.executeForm(*tmp);
	test.signForm(*tmp);
	test.executeForm(*tmp);
}