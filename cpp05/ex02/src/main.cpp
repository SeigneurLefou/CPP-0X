#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
	Bureaucrat	patron("F0xer", 6);
	Bureaucrat	camarade("Mewen", 7);
	Bureaucrat	bebe("Yannis", 1);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
}
