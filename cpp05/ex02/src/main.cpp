#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	patron("F0xer", 146);
	Bureaucrat	camarade("Mewen", 7);
	Bureaucrat	bebe("Yannis", 138);
	AForm		*form = new ShrubberyCreationForm("fuck");

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
	std::cout << *form;

	std::cout << std::endl;

	patron.signForm(*form);

	camarade.executeForm(*form);

	bebe.signForm(*form);
	camarade.signForm(*form);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
	std::cout << *form;

	std::cout << std::endl;

	patron.executeForm(*form);
	bebe.executeForm(*form);
	camarade.executeForm(*form);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
	std::cout << *form;

	std::cout << std::endl;

	delete form;
}
