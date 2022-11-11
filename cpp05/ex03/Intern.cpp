/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:32:10 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:15:03 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern( const Intern &other )
{
    *this = other;
}

Intern &Intern::operator=( const Intern &other )
{
    *this = other;
    return (*this);
}

Intern::~Intern()
{}

const char *Intern::NotSameFormExeption::what() const throw()
{
    return ("There is not same form!");
}

Form    *CreateNewPresidentalForm( std::string name, std::string target )
{
    return (new PresidentialPardonForm(name, target));
}

Form    *CreateNewRobotomyForm( std::string name, std::string target )
{
    return (new RobotomyRequestForm(name, target));
}

Form    *CreateNewShrubberyForm( std::string name, std::string target )
{
    return (new ShrubberyCreationForm(name, target));
}

Form    *Intern::makeForm( std::string form_name, std::string form_target )
{
    const std::string   form_names[] = {"PresidentalForm", "RobotomyForm", "ShrubberyForm"};
    Form    *(*form[3])( std::string name, std::string target ) = \
        {CreateNewPresidentalForm, CreateNewRobotomyForm, CreateNewShrubberyForm};

    for (int i = 0; i < 3; i++)
    {
        if (form_names[i] == form_name)
        {
            std::cout << "Intern creates " << form_names[i] << std::endl;
            return (form[i](form_name, form_target));
        }
    }
    throw NotSameFormExeption();
    return (NULL);
}
