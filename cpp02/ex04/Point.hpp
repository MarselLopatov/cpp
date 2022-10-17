/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:32:28 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 09:56:46 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed _x;
    Fixed _y;

public:
    Point(float x, float y);
    Point()
    ~Point();
};
