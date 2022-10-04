/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:50:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/04 17:35:56 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contacts[8];
	static int	index;
	static int	amount;
public:
	// PhoneBook();
	// ~PhoneBook();

	void	add();
	void	search();
	void	end();
};

#endif