/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:24:51 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:31:20 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & C) : AMateria(C)
{
}

Cure::~Cure()
{
}

Cure & Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}
