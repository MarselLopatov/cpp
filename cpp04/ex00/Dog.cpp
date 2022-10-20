/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:48:04 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 16:32:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor called\n";
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog operator= called\n";
	this->_type = other._type;
	return (*this);
}

Dog::Dog( const Dog& other )
{
	std::cout << "Dog copy constuctor called\n";
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "Dog sound\n";
}
