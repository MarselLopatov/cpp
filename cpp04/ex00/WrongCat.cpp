/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:37:28 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 16:40:00 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal ("WrongCat")
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat operator= called\n";
	this->_type = other._type;
	return (*this);
}

WrongCat::WrongCat( const WrongCat& other)
{
	std::cout << "WrongCat copy consturcor called\n";
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat sound\n";
}