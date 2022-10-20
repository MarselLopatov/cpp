/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:42:16 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 13:08:59 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void announce( void ); 
	Zombie( std::string name );
	Zombie();
	~Zombie();

	void	set_name( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif