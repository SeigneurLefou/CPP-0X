#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat patron("F0xer", 600);
	Bureaucrat camarade("Mewen", -600);
	Bureaucrat bebe("Yannis", 1);

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;

	std::cout << std::endl;

	patron.incrementGrade();
	camarade.incrementGrade();
	bebe.decrementGrade();

	std::cout << std::endl;

	std::cout << patron;
	std::cout << camarade;
	std::cout << bebe;
}
