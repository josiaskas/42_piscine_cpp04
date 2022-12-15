/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:13:22 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:18:57 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
		unsigned int _xp;

	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(AMateria const &materia);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &rhs);

		std::string const &getType() const; // Returns the materia type
		unsigned int getXP() const;			// Returns the Materia's XP

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
