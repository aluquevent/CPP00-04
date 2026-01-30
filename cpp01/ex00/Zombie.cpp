#include "Zombie.hpp"
#include <iostream>
#include  <string>

Zombie::Zombie(std::string name)
{
	this->name  = name;
}

Zombie::~Zombie()
{
	std::cout << name << "destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
