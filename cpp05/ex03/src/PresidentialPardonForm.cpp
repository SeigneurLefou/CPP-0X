#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default") {
    std::cout << "PresidentialPardonForm constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
    std::cout << "PresidentialPardonForm copied" << std::endl;
    *this = other;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target) {
    std::cout << "PresidentialPardonForm constructed" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    std::cout << "PresidentialPardonForm assigned" << std::endl;
    if (this != &other) {
		this->_target = other.getTarget();
		this->_is_signed = other.getIsSigned();
		this->_grade_sign = other.getGradeSign();
		this->_grade_exec = other.getGradeExec();
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->_grade_exec)
		throw AForm::GradeTooLowException();
	if (!this->_is_signed)
		throw AForm::FormNotSignedException();
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
	}
}
