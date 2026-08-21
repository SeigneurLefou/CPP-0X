#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "default") {
    std::cout << "RobotomyRequestForm constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
    std::cout << "RobotomyRequestForm copied" << std::endl;
    *this = other;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target) {
    std::cout << "RobotomyRequestForm constructed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    std::cout << "RobotomyRequestForm assigned" << std::endl;
    if (this != &other) {
		this->_target = other.getTarget();
		this->_is_signed = other.getIsSigned();
		this->_grade_sign = other.getGradeSign();
		this->_grade_exec = other.getGradeExec();
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->_grade_exec)
		throw AForm::GradeTooLowException();
	if (!this->_is_signed)
		throw AForm::FormNotSignedException();
	else
	{
		std::cout << "*drill drill drill*" << std::endl;
		if (std::rand() & 1)
			std::cout << this->_target << " as been robotized." << std::endl;
		else
			std::cout << this->_target << " failed to been robotized." << std::endl;
	}
}
