/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:40:50 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/11 17:00:18 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my" 
        << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
        << "enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std:: cout << "I think I deserve to have some extra bacon for free. I've been coming for"
        << "years whereas you started working here since last month.\n";
}

void    Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::other( void )
{
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void    Harl::complain( std::string level )
{
    std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void        (Harl::*func[5])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::other};
    int         i = 0;

    for (i = 0; i < 4; i++)
        if (message[i] == level)
            break ;
    switch (i)
    {
        case 0:
            (this->*func[i++])();
        case 1:
            (this->*func[i++])();
        case 2:
            (this->*func[i++])();
        case 3:
            (this->*func[i++])();
            break ;
        default:
            (this->*func[i])();
            break ;
    }
}
