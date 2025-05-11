/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:49:47 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/07 16:49:50 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Phonebook_utils.hpp"

Phonebook::Phonebook(void)
{
    this->_index = 0;
    std::cout << "\033[38;5;74m"
            << "Your phonebook is ready! It can hold up to 8 contacts.\033[0m\n"
            << "\033[38;5;214m"
            << "Use commands: ADD to add a contact, SEARCH to find one, and EXIT to quit."
            << "\033[0m\n" 
			<< std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "\033[38;5;75mGoodbye! See you next time.\033[0m" << std::endl;
}

void Phonebook::add(void)
{
    std::string str;

    str = "";
    if (this->_index > 7)
        std::cout << "\033[31mNOTE: you are replacing info about " << this->_contacts[this->_index % 8].get_fname() << "\033[0m" << std::endl;

    while (str.empty()) {
        std::cout << "\033[38;5;214m" << "Enter first name: " << "\033[0m";
        std::getline(std::cin, str);
    }
    this->_contacts[this->_index % 8].set_fname(str);

    str = "";
    while (str.empty()) {
        std::cout << "\033[38;5;214m" << "Enter last name: " << "\033[0m";
        std::getline(std::cin, str);
    }
    this->_contacts[this->_index % 8].set_lname(str);

    str = "";
    while (str.empty()) {
        std::cout << "\033[38;5;214m" << "Enter nickname: " << "\033[0m";
        std::getline(std::cin, str);
    }
    this->_contacts[this->_index % 8].set_nick(str);
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "\033[38;5;214mEnter phone number: \033[0m";
		if (std::getline(std::cin, str) && !str.empty())
		{
			bool is_digit = true;
			for (std::string::size_type i = 0; i < str.size(); ++i)
			{
				if (!std::isdigit(str[i]))
				{
					is_digit = false;
					break;
				}
			}

			if (is_digit)
			{
				this->_contacts[this->_index % 8].set_phone_num(str);
			}
			else
			{
				std::cout << "\033[31mInvalid input! Phone number must contain only digits.\033[0m" << std::endl;
				str = ""; // Reset to force re-entry
			}
		}
	}

    str = "";
    while (str.empty()) {
        std::cout << "\033[38;5;214m" << "Enter darkest secret: " << "\033[0m";
        std::getline(std::cin, str);
    }
    this->_contacts[this->_index % 8].set_secret(str);

    this->_index++;
}

void	Phonebook::display(Contact contact)
{
	if (!contact.get_fname().size())
	{
		std::cout << "\033[31mFailed to get info for this contact\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[38;5;32m" << "First Name: " << "\033[0m" << contact.get_fname() << std::endl;
	std::cout << "\033[38;5;32m" << "Last Name: " << "\033[0m" << contact.get_lname() << std::endl;
	std::cout << "\033[38;5;32m" << "Nickname: " << "\033[0m" << contact.get_nick() << std::endl;
	std::cout << "\033[38;5;32m" << "Phone Number: " << "\033[0m" << contact.get_phone_num() << std::endl;
	std::cout << "\033[38;5;32m" << "Darkest Secret: " << "\033[0m" << contact.get_secret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void	Phonebook::search(void)
{
	std::string	str;

	if (!search_ui(this->_contacts))
	{
		std::cout << "\033[31m" << std::endl << "Phonebook is empty!" << "\033[0m" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "\033[38;5;81m" << "Select an index: " << "\033[0m";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_contacts[str[0] - 1 - '0'].get_fname().size())
				break ;
		}
		if (str != "")
			std::cout << "\033[38;5;196m" << "Enter index is invalid!" << "\033[0m" << std::endl;
	}
	if (!std::cin.eof())
		this->display(this->_contacts[str[0] - 1 - '0']);
}
