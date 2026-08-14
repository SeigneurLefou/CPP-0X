#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
public:
    Bureaucrat(std::string name, unsigned int grade);
	std::string		getName();
    unsigned int	getGrade();
	std::exception	GradeTooHighException();
	std::exception	GradeTooLowException();

private:
	const std::string	_name;
	unsigned int		_grade;
	void				_setGrade(unsigned int grade);

};

std::ostream	&operator<<(std::ostream &output, Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_HPP
