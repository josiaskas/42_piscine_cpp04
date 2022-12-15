/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:09:43 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 13:43:02 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const &cat): Animal(cat), _brain(new Brain(*(cat._brain)))
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	if (_brain){
		delete _brain;
	}
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	_brain = rhs._brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
