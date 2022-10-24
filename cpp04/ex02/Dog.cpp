/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:48:04 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 15:21:25 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog&	Dog::operator=( const Dog& other )
{
	if (_brain)
		delete _brain;
	_brain = new Brain(*other._brain);
	std::cout << "Dog operator= called\n";
	this->_type = other._type;
	return (*this);
}

Dog::Dog( const Dog& other ): Animal("Dog")
{
	std::cout << "Dog copy constuctor called\n";
	*this = other;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destuctor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "Dog sound\n";
}
