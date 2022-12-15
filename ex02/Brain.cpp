/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:15:03 by jkasongo          #+#    #+#             */
/*   Updated: 2022/12/15 12:34:28 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brian::Brian()
{
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = "Idea " + std::to_string(i);
	}
	std::cout << "Brain default constructor" << std::endl;
}

Brian::Brian(const Brian& brain)
{
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain copy constructor" << std::endl;
}

Brian::~Brian()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &Brian::operator=(const Brain& rhs)
{
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}
