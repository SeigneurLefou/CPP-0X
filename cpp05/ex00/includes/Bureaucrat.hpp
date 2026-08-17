#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>


class Bureaucrat {
	public:
    	Bureaucrat(const std::string name, unsigned int grade);
    	Bureaucrat(const Bureaucrat &other);
    	Bureaucrat &operator=(const Bureaucrat &other);
    	~Bureaucrat();
		std::string		getName() const;
    	unsigned int	getGrade() const;
		void			setGrade(int grade);
		void			incrementGrade();
		void			decrementGrade();

	private:
		const std::string	_name;
		unsigned int		_grade;

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &bureaucrat);

#endif // BUREAUCRAT_HPP
