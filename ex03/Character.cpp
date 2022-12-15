/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:16:59 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:25 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Unknown"), _inventoryCount(0), _leftMateriaCount(0)
{
}

Character::Character(const std::string &name):_name(name), _inventoryCount(0), _leftMateriaCount(0)
{

}

Character::Character(const Character &c):_name(c._name), _inventoryCount(c._inventoryCount), _leftMateriaCount(c._leftMateriaCount)
{
	for (int i = 0; i < _inventoryCount; i++)
	{
		_inventory[i] = c._inventory[i]->clone();
	}
}

Character &Character::operator=(const Character &rhs)
{
	_name = rhs._name;
	_inventoryCount = rhs._inventoryCount;
	_leftMateriaCount = rhs._leftMateriaCount;

}

Character::~Character()
{
}

void Character::equip(AMateria *m)
{
	if (_inventoryCount < INVENTORY_SIZE)
	{
		_inventory[_inventoryCount] = m;
		_inventoryCount++;
	}
}

void Character::unequip(int idx)
{
	if (idx < INVENTORY_SIZE)
	{
		_leftMateria[_leftMateriaCount] =  _inventory[idx];
		_leftMateriaCount++;
		_inventory[idx] = nullptr;
		_inventoryCount--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < _inventoryCount)
		_inventory[idx]->use(target);
}