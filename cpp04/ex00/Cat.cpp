/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:04:07 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 13:37:22 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal ("Cat")
{
	std::cout << "Cat constructor called\n";
}

Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat operator= called\n";
	this->_type = other._type;
	return (*this);
}

Cat::Cat( const Cat& other): Animal("Cat")
{
	std::cout << "Cat copy consturcor called\n";
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const
{
    std::cout << "Cat sound\n";
}