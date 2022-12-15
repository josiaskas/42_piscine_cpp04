#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string& type): _type(type)
{
	std::cout << "Animal "<< _type << " constructor" << std::endl;
}

Animal::Animal(Animal const &animal): _type(animal._type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

