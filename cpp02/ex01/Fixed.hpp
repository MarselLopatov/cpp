/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:42:51 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/14 14:19:50 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed& copy );
	~Fixed();

	Fixed&	operator=( const Fixed& copy );
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<( std::ostream& stream, const Fixed& copy );

#endif