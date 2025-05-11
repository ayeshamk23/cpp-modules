/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:48:01 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:48:03 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "default";
    std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) 
{
    *this = copy;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) 
{
    this->type = copy.type;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal " << type << " Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
