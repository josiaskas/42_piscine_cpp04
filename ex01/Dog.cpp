/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:57:28 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 13:48:03 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog), _brain(new Brain(*(dog._brain)))
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	_brain = rhs._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}


