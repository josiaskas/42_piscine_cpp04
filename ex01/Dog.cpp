/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:57:28 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/14 09:07:46 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}


