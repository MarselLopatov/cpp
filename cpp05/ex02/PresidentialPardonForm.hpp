/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:57:20 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 19:25:14 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

public:

    PresidentialPardonForm();
    PresidentialPardonForm( std::string name, std::string target );
    PresidentialPardonForm( const PresidentialPardonForm &other );
    ~PresidentialPardonForm();

    PresidentialPardonForm  &operator=( const PresidentialPardonForm &other );
    void                    execute( Bureaucrat const & executor ) const;
};

#endif