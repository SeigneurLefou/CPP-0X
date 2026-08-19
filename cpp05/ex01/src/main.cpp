#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	patron("F0xer", 6);
	Bureaucrat	camarade("Mewen", 7);
	Bureaucrat	bebe("Yannis", 1);
	Form		formb6("b6", 6, 6);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
	std::cout << formb6;

	std::cout << std::endl;

	camarade.signForm(formb6);
	patron.signForm(formb6);
	bebe.signForm(formb6);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
	std::cout << formb6;

}
