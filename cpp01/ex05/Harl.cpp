/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:40:50 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/11 16:19:50 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my" 
        << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
        << "enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning( void )
{
    std:: cout << "I think I deserve to have some extra bacon for free. I've been coming for"
        << "years whereas you started working here since last month.\n";
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain( std::string level )
{
    std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*func[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
        if (message[i] == level)
            (this->*func[i])();
}
