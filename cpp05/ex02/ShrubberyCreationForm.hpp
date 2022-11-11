/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:45:45 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 18:57:39 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIOMFORM_HPP
# define SHRUBBERYCREATIOMFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm( std::string name, std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm &other );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm   &operator=( const ShrubberyCreationForm &other );
    void                    execute( Bureaucrat const & executor ) const;
};

#endif