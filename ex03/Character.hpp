/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:33:16 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 15:42:22 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

# define INVENTORY_SIZE 4

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & C);
		virtual ~Character();

		Character & operator=(Character const & rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria *_inventory[INVENTORY_SIZE];
		int _inventoryCount;
		AMateria *_leftMateria[INVENTORY_SIZE * 50];
		int _leftMateriaCount;
};

#endif
