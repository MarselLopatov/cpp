/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:26:21 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/23 14:24:34 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie;
	zombie = new Zombie(name);
	return zombie;
}

void randomChump( std::string name )
{
	Zombie zombie(name);

	zombie.announce();
}

int	main(void)
{
	Zombie *z_heap = newZombie("boba");
	Zombie z_stack("pupa");
	randomChump("biba");

	z_heap->announce();
	z_stack.announce();
	delete z_heap;
}
