#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern constructed" << std::endl;
}

Intern::Intern(const Intern &other) {
    std::cout << "Intern copied" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    std::cout << "Intern assigned" << std::endl;
    if (this != &other) {
    	return *this;
    }
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destroyed" << std::endl;
}

static AForm	*makePresi(const std::string target)
{
	return new PresidentialPardonForm(target);
}

static AForm	*makeRobot(const std::string target)
{
	return new RobotomyRequestForm(target);
}

static AForm	*makeShrub(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(const std::string form_type, const std::string target)
{
	std::string	forms[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm		*(*make_form[])(const std::string target) = {&makeRobot, &makePresi, &makeShrub};

	for (int i = 0; i < 3; i++)
	{
		if (form_type == forms[i])
		{
			std::cout << "Intern creates " << form_type << " targeted " << target << std::endl;
			return (make_form[i](target));
		}
	}
	std::cerr << "This formulary isn't in our data base. There's only the following : \"robotomy request\", \"shrubbery creation\", \"presidential pardon\"," << std::endl;  
	return (NULL);
}
