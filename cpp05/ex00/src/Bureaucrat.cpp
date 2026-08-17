#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name) {
    std::cout << "Bureaucrat constructed" << std::endl;
	try {
		this->setGrade(grade);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade given for " << this->getName() << " is " << e.what() << "." << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade given for " << this->getName() << " is " << e.what() << "." << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    std::cout << "Bureaucrat copied" << std::endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    std::cout << "Bureaucrat assigned" << std::endl;
    if (this != &other) {
		this->_grade = other.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destroyed" << std::endl;
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade) {
	if (grade < 1) {
		this->_grade = 1;
		throw Bureaucrat::GradeTooLowException();
	}
	else if (150 < grade) {
		this->_grade = 150;
		throw Bureaucrat::GradeTooHighException();
	}
	else
		this->_grade = grade;
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &bureaucrat) {

	output	<< bureaucrat.getName()
			<< ", bureaucrat grade "
			<< bureaucrat.getGrade()
			<< "." << std::endl;
	return (output);
}

void	Bureaucrat::incrementGrade() {
	try {
		this->setGrade(this->_grade + 1);
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade of " << this->getName()
			<< " is " << this->getGrade()
			<< " and it's " << e.what() << " to increment" << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {
	try {
		this->setGrade(this->_grade - 1);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade of " << this->getName()
			<< " is " << this->getGrade()
			<< " and it's " << e.what() << " to decrement" << std::endl;
	}
}


const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("too high");
}
