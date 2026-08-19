#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string name, int grade_sign, int grade_exec);
    	Form(const Form &other);
    	Form &operator=(const Form &other);
    	~Form();
		void			beSigned(Bureaucrat &bureaucrat);
		std::string		getName() const;
    	bool			getIsSigned() const;
    	unsigned int	getGradeSign() const;
    	unsigned int	getGradeExec() const;
		void			setGradeSign(int grade);
		void			setGradeExec(int grade);

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		unsigned int		_grade_sign;
		unsigned int		_grade_exec;
};

std::ostream	&operator<<(std::ostream &output, Form const &form);

#endif // FORM_HPP
