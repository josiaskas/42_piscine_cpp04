/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:16:59 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:25 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default"), _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const & M) : _type(M._type), _xp(M._xp)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	_xp = rhs._xp;
	_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
