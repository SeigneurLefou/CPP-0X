#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(std::string name, int grade_sign, int grade_exec, std::string target);
    	AForm(const AForm &other);
    	virtual AForm &operator=(const AForm &other);
    	virtual ~AForm();
		virtual void	execute(const Bureaucrat &bureaucrat) const = 0;
		virtual void			beSigned(const Bureaucrat &bureaucrat);
		virtual std::string		getName() const;
    	virtual bool			getIsSigned() const;
    	virtual unsigned int	getGradeSign() const;
    	virtual unsigned int	getGradeExec() const;
    	virtual std::string		getTarget() const;
		virtual void			setGradeSign(int grade);
		virtual void			setGradeExec(int grade);

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
		
	protected:
		const std::string	_name;
		bool				_is_signed;
		unsigned int		_grade_sign;
		unsigned int		_grade_exec;
		std::string			_target;
};

std::ostream	&operator<<(std::ostream &output, AForm const &form);

#endif // FORM_HPP
