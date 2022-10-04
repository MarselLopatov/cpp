/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:42:16 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/23 13:32:06 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void announce( void ); 
	Zombie( std::string name );
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif