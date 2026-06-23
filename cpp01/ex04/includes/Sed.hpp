#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Sed {
	public:
		Sed(std::string filename, std::string from, std::string to);
		~Sed(void);
		bool	replace(void);

	private:
		std::string	_filename;
		std::string	_from;
		std::string	_to;
		std::string _replaceLine(std::string line);
		bool		_replaceFile();
};

#endif // SED_HPP
