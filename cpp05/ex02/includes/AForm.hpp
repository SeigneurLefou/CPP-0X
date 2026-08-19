#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm(std::string name, int grade_sign, int grade_exec);
    	AForm(const AForm &other);
    	AForm &operator=(const AForm &other);
    	~AForm();
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

std::ostream	&operator<<(std::ostream &output, AForm const &form);

#endif // FORM_HPP
