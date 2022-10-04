/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:26:21 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/23 14:45:51 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}

int	main(void)
{
	int N = 5;
	Zombie *zombie = new Zombie("Joe");
	Zombie *zombiehorde = zombieHorde(N, "kek");

	zombie->announce();
	for (int i = 0; i < N; i++)
		zombiehorde->announce();
}
