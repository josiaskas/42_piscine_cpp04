/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:21:10 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:25:21 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & C);
		virtual ~Cure();

		Cure & operator=(Cure const & rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
#endif
