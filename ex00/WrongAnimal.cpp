/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:21:03 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/16 12:09:48 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type):_type(type)
{
	std::cout << "WrongAnimal "<< _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal):_type(wrongAnimal._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor"<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	_type = rhs._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

