#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie	*new_zombie;
	if (argc < 2)
		std::cout << "No zombie precise" << std::endl;
	for (int i = 1; i < argc; i++)
		randomChump(argv[i]);
	randomChump("Yo");
	new_zombie = newZombie("Salut");
	new_zombie->announce();
	randomChump("Bonjour");
	delete new_zombie;
	return (0);
}
