#include <iostream>
#include <string>

int main()
{
	std::string		stringVAR = "HI THIS IS BRAIN";
	std::string*	stringPTR = NULL;
	std::string&	stringREF = stringVAR;

	stringPTR = &stringVAR;

	std::cout << "Memory address of the stringVAR is " << &stringVAR << std::endl;
	std::cout << "Memory address of the stringPTR is " << stringPTR << std::endl;
	std::cout << "Memory address of the stringREF is " << &stringREF << std::endl;

	std::cout << "Value pointed by stringVAR is " << stringVAR << std::endl;
	std::cout << "Value pointed by stringPTR is " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF is " << stringREF << std::endl;

}
