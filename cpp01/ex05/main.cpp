/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:42:08 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/11 16:20:04 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl	obj;

	obj.complain("DEBIG");
	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("ERROR");
}
