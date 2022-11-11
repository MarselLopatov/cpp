/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:55:01 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 18:54:18 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm( std::string name, std::string target );
    RobotomyRequestForm( const RobotomyRequestForm &other );
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=( const RobotomyRequestForm &other );
    void                execute( Bureaucrat const & executor ) const;
};

#endif