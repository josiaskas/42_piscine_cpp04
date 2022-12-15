/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:24:51 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:31:20 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & ice) : AMateria(ice)
{
}

Ice::~Ice()
{
}

Ice & Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice;
	return (clone);
}

