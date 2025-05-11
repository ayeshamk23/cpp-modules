/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:47:28 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:47:30 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default") 
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &copy) 
{
    *this = copy;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy) 
{
    this->type = copy.type;
    return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal " << type << " Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}