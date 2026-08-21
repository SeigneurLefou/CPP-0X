#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		void	execute(const Bureaucrat &bureaucrat) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
