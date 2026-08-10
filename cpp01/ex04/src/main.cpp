#include "Sed.hpp"

int	push_file(std::string filename)
{
	std::string	line;

	std::ifstream	infile(filename.c_str());
    if (!infile.is_open()) {
		std::cerr << "Error opening the file!" << std::endl;
        return (false);
    }

	std::ofstream	outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) {
		std::cerr << "Error creating " << filename << ".replace" << std::endl;
        return (false);
    }


    while (getline(infile, line)) {
		outfile << line << std::endl;
	}
	return (true);
}

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "Usage : ./mySed <filename> <s1> <s2> with s1 to replace with s2." << std::endl;
		return (1);
	}
	if ((std::string)argv[2] == "")
	{
		if (!push_file(argv[1]))
			return (1);
		return (0);
	}

	Sed	sed_filename(argv[1], argv[2], argv[3]);
	if (!sed_filename.replace()) {
		return (1);
	}
	return (0);
}
