#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default") {
    std::cout << "ShrubberyCreationForm constructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {
    std::cout << "ShrubberyCreationForm copied" << std::endl;
    *this = other;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target) {
    std::cout << "ShrubberyCreationForm constructed" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    std::cout << "ShrubberyCreationForm assigned" << std::endl;
    if (this != &other) {
		this->_target = other.getTarget();
		this->_is_signed = other.getIsSigned();
		this->_grade_sign = other.getGradeSign();
		this->_grade_exec = other.getGradeExec();
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->_grade_exec)
		throw AForm::GradeTooLowException();
	if (!this->_is_signed)
		throw AForm::FormNotSignedException();
	else
	{
		std::ofstream	outfile((this->_target + "_strubbery").c_str());
		if (!outfile.is_open()) {
			std::cerr << "Error creating " << this->_target + "_strubbery" << ".replace" << std::endl;
			return ;
		}
		outfile << "               ,@@@@@@@, " << std::endl
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
		<< "       |o|        | |         | |" << std::endl
		<< "       |.|        | |         | |" << std::endl
		<< "jgs __/ ._\\______/  ,\\_______/.  \\_______" << std::endl;
	}
}
