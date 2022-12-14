/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:19:12 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/14 09:26:13 by jkasongo         ###   ########.fr       */
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
		virtual ~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const &rhs);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif
