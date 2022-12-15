/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:47:43 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/14 09:24:09 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const std::string& type);
		Animal(Animal const &animal);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);
		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif
