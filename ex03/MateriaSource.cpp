/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:39:32 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 17:27:50 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _count(0)
{
	for (size_t i = 0; i < MATERIA_SOURCE_SIZE; i++)
		_materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &src): _count(src._count)
{
	for (int i = 0; i < _count; i++)
		_materia[i] = src._materia[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _count; i++)
	{
		delete _materia[i];
		_materia[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < _count; i++)
	{
		delete _materia[i];
		_materia[i] = nullptr;
	}
	_count = rhs._count;
	for (int i = 0; i < _count; i++)
		_materia[i] = rhs._materia[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_count < MATERIA_SOURCE_SIZE)
		_materia[_count++] = m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _count; i++)
	{
		if (_materia[i]->getType() == type)
			return _materia[i]->clone();
	}
	return nullptr;
}
