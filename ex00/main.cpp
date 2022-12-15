#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();

	//simple, Animal test
	const Animal *meta = new Animal();
	meta->makeSound();

	// dynamic linking
	Animal *dog = new Dog();
	dog->makeSound();
	delete dog;

	delete meta;
	delete j;
	delete i;

	return 0;
}
