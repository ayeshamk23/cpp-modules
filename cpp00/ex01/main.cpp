/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:49:18 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/07 16:49:20 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook 	ph1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "\033[38;5;74m" \
            << "Enter a command >"
			<< "\033[0m";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add();
		else if (str == "SEARCH")
			ph1.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
