#include "Zombie.hpp"

Zombie::Zombie(void) {
	_name = "noname";
}

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie(void) {
	std::cout << _name << ": Byyyyyyyyyyyyyyye..." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
