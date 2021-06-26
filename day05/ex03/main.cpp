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
	form.execute(test1);
	form.execute(test);
	std::cout << " ---------- \n";
	form1.execute(test1);
	form1.execute(test);
	std::cout << " ---------- \n";
	form2.execute(test1);
	form2.execute(test);
	std::cout << " ---------- \n";
	tmp = hamid.makeForm("robotomy request", "aljk");
	tmp->execute(test);
}