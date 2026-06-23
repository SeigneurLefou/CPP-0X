#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	public:
		Harl();
		Harl(const Harl &other);
		~Harl();
		void	complain(std::string level);

	private:
		std::string	_levels[4];
		void (Harl::*_complaints[4])(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif // HARL_HPP
