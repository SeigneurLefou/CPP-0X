#include "AForm.hpp"

AForm::AForm() : _name("noname"), _is_signed(false), _grade_sign(150), _grade_exec(150), _target("default") {
    std::cout << "AForm constructed" << std::endl;
}

AForm::AForm(std::string name, int grade_sign, int grade_exec, std::string target) : _name(name), _is_signed(false), _target(target) {
    std::cout << "AForm constructed" << std::endl;
	try {
		this->setGradeSign(grade_sign);
	} catch (AForm::GradeTooLowException &e) {
		std::cout << "Grade sign given for " << this->getName() << " is " << e.what() << "." << std::endl;
	} catch (AForm::GradeTooHighException &e) {
		std::cout << "Grade sign given for " << this->getName() << " is " << e.what() << "." << std::endl;
	}
	try {
		this->setGradeExec(grade_exec);
	} catch (AForm::GradeTooLowException &e) {
		std::cout << "Grade execute given for " << this->getName() << " is " << e.what() << "." << std::endl;
	} catch (AForm::GradeTooHighException &e) {
		std::cout << "Grade execute given for " << this->getName() << " is " << e.what() << "." << std::endl;
	}
}

AForm::AForm(const AForm &other) {
    std::cout << "AForm copied" << std::endl;
    *this = other;
}

AForm &AForm::operator=(const AForm &other) {
    std::cout << "AForm assigned" << std::endl;
    if (this != &other) {
		this->_is_signed = other.getIsSigned();
		this->_grade_sign = other.getGradeSign();
		this->_grade_exec = other.getGradeExec();
		this->_target = other.getTarget();
    }
    return *this;
}

AForm::~AForm() {
    std::cout << "AForm destroyed" << std::endl;
}

std::string	AForm::getName() const {
	return (this->_name);
}

unsigned int	AForm::getGradeSign() const {
	return (this->_grade_sign);
}

unsigned int	AForm::getGradeExec() const {
	return (this->_grade_exec);
}

bool	AForm::getIsSigned() const {
	return (this->_is_signed);
}

std::string	AForm::getTarget() const {
	return (this->_target);
}

void	AForm::setGradeSign(int grade) {
	if (grade < 1) {
		this->_grade_sign = 1;
		throw AForm::GradeTooHighException();
	}
	else if (150 < grade) {
		this->_grade_sign = 150;
		throw AForm::GradeTooLowException();
	}
	else
		this->_grade_sign = grade;
}

void	AForm::setGradeExec(int grade) {
	if (grade < 1) {
		this->_grade_exec = 1;
		throw AForm::GradeTooHighException();
	}
	else if (150 < grade) {
		this->_grade_exec = 150;
		throw AForm::GradeTooLowException();
	}
	else
		this->_grade_exec = grade;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_sign)
		throw AForm::GradeTooLowException();
	else
		this->_is_signed = true;
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("too low");
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("too high");
}

const char	*AForm::FormNotSignedException::what() const throw() {
	return ("not signed");
}

std::ostream	&operator<<(std::ostream &output, const AForm &form) {
	std::string	is_signed_sentence = (form.getIsSigned()) ? "is signed" : "isn't signed";
	output	<< form.getName()
			<< ", formulary target is "
			<< form.getTarget()
			<<" and he need "
			<< form.getGradeSign()
			<< " grade to sign and need "
			<< form.getGradeExec()
			<< " grade to execute and he "
			<< is_signed_sentence
			<< "." << std::endl;
	return (output);
}
