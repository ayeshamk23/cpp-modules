/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:47:59 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/07 16:48:05 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; ++i) 
        {
            std::string s = av[i];
            for (size_t j = 0; j < s.length(); ++j) 
            {
                std::cout << (char)std::toupper(s[j]);
            }
        }
        std::cout << '\n'; 
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
    }
    return 0;

}