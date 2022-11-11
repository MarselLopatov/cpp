/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:31:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 17:55:48 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    class NotSameFormExeption : public std::exception
    {
        const char *what() const throw();
    };

    Intern();
    Intern( const Intern &other );
    ~Intern();

    Intern  &operator=( const Intern &other );
    Form    *makeForm( std::string form_name, std::string form_target );
};

#endif