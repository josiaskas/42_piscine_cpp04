/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:21:38 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 14:21:49 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(Ice const & ice);
	virtual ~Ice();

	Ice & operator=(Ice const & rhs);

	AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
