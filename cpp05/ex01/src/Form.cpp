#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _is_signed(false) {
    std::cout << "Form constructed" << std::endl;
	try {
		this->setGradeSign(grade_sign);
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Grade sign given for " << this->getName() << " is " << e.what() << "." << std::endl;
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Grade sign given for " << this->getName() << " is " << e.what() << "." << std::endl;
	}
	try {
		this->setGradeExec(grade_exec);
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Grade execute given for " << this->getName() << " is " << e.what() << "." << std::endl;
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Grade execute given for " << this->getName() << " is " << e.what() << "." << std::endl;
	}
}

Form::Form(const Form &other) {
    std::cout << "Form copied" << std::endl;
    *this = other;
}

Form &Form::operator=(const Form &other) {
    std::cout << "Form assigned" << std::endl;
    if (this != &other) {
		this->_is_signed = other.getIsSigned();
		this->_grade_sign = other.getGradeSign();
		this->_grade_exec = other.getGradeExec();
    }
    return *this;
}

Form::~Form() {
    std::cout << "Form destroyed" << std::endl;
}

std::string	Form::getName() const {
	return (this->_name);
}

unsigned int	Form::getGradeSign() const {
	return (this->_grade_sign);
}

unsigned int	Form::getGradeExec() const {
	return (this->_grade_exec);
}

bool	Form::getIsSigned() const {
	return (this->_is_signed);
}

void	Form::setGradeSign(int grade) {
	if (grade < 1) {
		this->_grade_sign = 1;
		throw Form::GradeTooHighException();
	}
	else if (150 < grade) {
		this->_grade_sign = 150;
		throw Form::GradeTooLowException();
	}
	else
		this->_grade_sign = grade;
}

void	Form::setGradeExec(int grade) {
	if (grade < 1) {
		this->_grade_exec = 1;
		throw Form::GradeTooHighException();
	}
	else if (150 < grade) {
		this->_grade_exec = 150;
		throw Form::GradeTooLowException();
	}
	else
		this->_grade_exec = grade;
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	else
		this->_is_signed = true;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("too low");
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("too high");
}

std::ostream	&operator<<(std::ostream &output, Form const &form) {
	std::string	is_signed_sentence = (form.getIsSigned()) ? "is signed" : "isn't signed";
	output	<< form.getName()
			<< ", formulary need "
			<< form.getGradeSign()
			<< " grade to sign and need "
			<< form.getGradeExec()
			<< " grade to execute and he "
			<< is_signed_sentence
			<< "." << std::endl;
	return (output);
}
