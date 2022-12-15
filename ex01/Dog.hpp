/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:56:24 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 13:50:49 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &dog);
		virtual ~Dog();
		Dog &operator=(Dog const &rhs);
		void makeSound() const;
		const Brain *getBrain() const;
	private	:
		Brain *_brain;
};

#endif
