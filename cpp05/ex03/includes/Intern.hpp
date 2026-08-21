#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();
	AForm	*makeForm(const std::string form_type, const std::string target);
	// AForm	*makeRobot(const std::string target);
	// AForm	*makePresi(const std::string target);
	// AForm	*makeShrub(const std::string target);

private:

};

#endif // INTERN_HPP
