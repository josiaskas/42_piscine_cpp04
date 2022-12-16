/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:19:05 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/16 12:07:19 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &wrongCat);
		~WrongCat();

		WrongCat &operator=(WrongCat const &rhs);
		void makeSound() const;
};

#endif
