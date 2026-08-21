#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	std::srand(time(0));
	Intern		random_slave;
	Bureaucrat	patron_a("F0xer", 146);
	Bureaucrat	camarade_a("Mewen", 7);
	Bureaucrat	bebe_a("Yannis", 138);
	Bureaucrat	patron_b("F0xer", 73);
	Bureaucrat	camarade_b("Mewen", 7);
	Bureaucrat	bebe_b("Yannis", 46);
	Bureaucrat	patron_c("F0xer", 26);
	Bureaucrat	camarade_c("Mewen", 1);
	Bureaucrat	bebe_c("Yannis", 6);
	AForm		*form_a = random_slave.makeForm("shrubbery creation", "arbre");
	AForm		*form_b = random_slave.makeForm("robotomy request", "robot");
	AForm		*form_c = random_slave.makeForm("presidential pardon", "president");

	if (!form_a || !form_b || !form_c)
	{
		if (form_a)
			delete form_a;
		if (form_b)
			delete form_b;
		if (form_c)
			delete form_c;
		return (1);
	}

	std::cout << std::endl;

	std::cout << patron_a;
	std::cout << camarade_a;
	std::cout << bebe_a;
	std::cout << *form_a;
	std::cout << patron_b;
	std::cout << camarade_b;
	std::cout << bebe_b;
	std::cout << *form_b;
	std::cout << patron_c;
	std::cout << camarade_c;
	std::cout << bebe_c;
	std::cout << *form_c;

	std::cout << std::endl;

	patron_a.signForm(*form_a);
	camarade_a.executeForm(*form_a);
	bebe_a.signForm(*form_a);
	camarade_a.signForm(*form_a);
	patron_b.signForm(*form_b);
	camarade_b.executeForm(*form_b);
	bebe_b.signForm(*form_b);
	camarade_b.signForm(*form_b);
	patron_c.signForm(*form_c);
	camarade_c.executeForm(*form_c);
	bebe_c.signForm(*form_c);
	camarade_c.signForm(*form_c);

	std::cout << std::endl;

	std::cout << patron_a;
	std::cout << camarade_a;
	std::cout << bebe_a;
	std::cout << *form_a;
	std::cout << patron_b;
	std::cout << camarade_b;
	std::cout << bebe_b;
	std::cout << *form_b;
	std::cout << patron_c;
	std::cout << camarade_c;
	std::cout << bebe_c;
	std::cout << *form_c;

	std::cout << std::endl;

	patron_a.executeForm(*form_a);
	bebe_a.executeForm(*form_a);
	camarade_a.executeForm(*form_a);
	patron_b.executeForm(*form_b);
	bebe_b.executeForm(*form_b);
	camarade_b.executeForm(*form_b);
	patron_c.executeForm(*form_c);
	bebe_c.executeForm(*form_c);
	camarade_c.executeForm(*form_c);

	std::cout << std::endl;

	std::cout << *form_a;
	std::cout << *form_b;
	std::cout << *form_c;

	std::cout << std::endl;

	delete form_a;
	delete form_b;
	delete form_c;
}
