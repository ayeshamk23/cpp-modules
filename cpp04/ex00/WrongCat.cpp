/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:48:06 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:48:08 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) 
{
    this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound: Meow " << std::endl;
}

