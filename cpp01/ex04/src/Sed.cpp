#include "Sed.hpp"

Sed::Sed(std::string filename, std::string from, std::string to) {

	_filename = filename;
	_from = from;
	_to = to;
}

Sed::~Sed(void) {

    std::cout << "Sed destroyed" << std::endl;
}

std::string Sed::_replaceLine(std::string line) {

    std::string new_line;
    size_t current_pos = 0;
    size_t found_pos;

    while ((found_pos = line.find(_from, current_pos)) != std::string::npos) {
        new_line += line.substr(current_pos, found_pos - current_pos);
        new_line += _to;
        current_pos = found_pos + _from.length();
    }
    new_line += line.substr(current_pos);
    return new_line;
}

bool	Sed::_replaceFile() {

	std::string	line;
	std::string	new_line;

	std::ifstream	infile(_filename.c_str());
    if (!infile.is_open()) {
		std::cerr << "Error opening the file!" << std::endl;
        return (false);
    }

	std::ofstream	outfile((_filename + ".replace").c_str());
    if (!outfile.is_open()) {
		std::cerr << "Error creating " << _filename << ".replace" << std::endl;
        return (false);
    }


    while (getline(infile, line)) {
        new_line = _replaceLine(line);
		outfile << new_line << std::endl;
	}

    return (true);
}

bool	Sed::replace() {

	if (!this->_replaceFile()) {
		return (false);
	}

	return (true);
}
