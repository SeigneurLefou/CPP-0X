#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	int		N = 10;
	Zombie	*new_horde;
	if (argc < 2)
	{
		std::cout << "No zombie precise" << std::endl;
		return (1);
	}
	new_horde = zombieHorde(N, argv[1]);
	for (int i = 0; i < N; i++)
		new_horde[i].announce();
	delete[] new_horde;
	return (0);
}
