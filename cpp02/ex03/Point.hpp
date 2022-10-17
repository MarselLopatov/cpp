/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:32:28 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 14:42:07 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point(float x, float y);
    Point();
    ~Point();

    Point   operator=( const Point& copy );
    float   getX() const;
    float   getY() const;
};

std::ostream&	operator<<( std::ostream& stream, const Point& copy );
bool            bsp( Point const a, Point const b, Point const c, Point const point);