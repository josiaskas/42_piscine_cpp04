/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:19:12 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/16 12:22:27 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(WrongAnimal const &wrongAnimal);
		~WrongAnimal(); //only this destructor will be called, since no virtual

		WrongAnimal &operator=(WrongAnimal const &rhs);
		void makeSound() const;  //no virtual to make it failed when there is dynamic linking
		std::string getType() const;

	protected:
		std::string _type;
};

#endif
