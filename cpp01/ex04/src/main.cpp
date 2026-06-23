#include "Sed.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "Usage : ./mySed <filename> <s1> <s2> with s1 to replace with s2." << std::endl;
		return (1);
	}
	Sed	sed_filename(argv[1], argv[2], argv[3]);
	if (!sed_filename.replace()) {
		return (1);
	}
	return (0);
}
