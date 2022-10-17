/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:42:51 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/14 16:28:44 by cdoria           ###   ########.fr       */
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
 
	bool	operator>( const Fixed& copy ) const;
	bool	operator<( const Fixed& copy ) const;
	bool	operator>=( const Fixed& copy ) const;
	bool	operator<=( const Fixed& copy ) const;
	bool	operator==( const Fixed& copy ) const;
	bool	operator!=( const Fixed& copy ) const;

	Fixed	operator+( const Fixed& copy );
	Fixed	operator-( const Fixed& copy );
	Fixed	operator*( const Fixed& copy );
	Fixed	operator/( const Fixed& copy );

	Fixed&	operator++( void );
	Fixed&	operator--( void );
	Fixed	operator--( int );
	Fixed	operator++( int );

	static Fixed&	min( Fixed& one, Fixed& two );
	static const Fixed&	min( const Fixed &one, const Fixed& two );
	static Fixed&	max( Fixed &one, Fixed& two );
	static const Fixed&	max( const Fixed &one, const Fixed& two );
};

std::ostream&	operator<<( std::ostream& stream, const Fixed& copy );

#endif