#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();


	// normal animal can't be instantiate  abstract class
	// const Animal *meta = new Animal();
	// meta->makeSound();

	// dynamic linking
	Animal *dog = new Dog();
	dog->makeSound();
	delete dog;

	// brains copy
	Cat gio = Cat();
	Cat gio2 = Cat(gio);
	const Brain *info1 = gio.getBrain();
	const Brain *info2 = gio2.getBrain();

	if (info1 == info2)
		std::cout << "share same brain "<< std::endl;
	else
		std::cout << "Different brain !!"<< std::endl;

	//delete meta;
	delete j;
	delete i;

	return 0;
}
