/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:00:02 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 17:12:57 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor\n";
}

Brain&	Brain::operator=( const Brain& other )
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::Brain( const Brain& other )
{
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}
