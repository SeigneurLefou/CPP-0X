#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
    Form();
    Form(const Form &other);
    Form &operator=(const Form &other);
    ~Form();
	void	beSigned(Bureaucrat &bureaucrat);

private:
	const std::string	_name;
	bool				_is_signed;
	unsigned int		_grade_sign;
	unsigned int		_grade_exec;

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
};

#endif // FORM_HPP
