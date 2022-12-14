/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:09:43 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/14 09:10:50 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const &cat): Animal(cat)
{
	std::cout << "Cat copy constructor" << std::endl;
}


Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
