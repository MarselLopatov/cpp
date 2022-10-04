/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:55:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/04 17:47:19 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>
# include <stdlib.h>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();

	void 		new_contact();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhone();
	std::string	getSecret();
};

#endif