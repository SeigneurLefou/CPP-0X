#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Makes some drilling noises, then informs that" + target + "  has been robotomized successfully 50% of the time. Otherwise, it informs that the robotomy failed.", 145, 137) {
    std::cout << "ShrubberyCreationForm constructed" << std::endl;
}

