#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) {
    std::cout << "Bureaucrat constructed" << std::endl;
	this->_name = name;
	try {
		this->_setGrade(grade);
	} catch (std:exception &e) {
		e.what();
	}
}

std::string	Bureaucrat::getName() {
	return (this->_name);
}

std::string	Bureaucrat::getGrade() {
	return (this->_grade);
}

void	Bureaucrat::_setGrade(unsigned int grade) {
	this->grade = (0 < grade) ?
		((grade < 151) ? grade :
		 	throw Bureaucrat::GradeTooHighException("too high")
		) : throw Bureaucrat::GradeTooLowException("too low");
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &bureaucrat) {

	output	<< bureaucrat.getName()
			<< ", bureaucrat grade "
			<< bureaucrat.getGrade()
			<< "." << std::endl;
	return (output);
}
