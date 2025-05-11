/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:47:46 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:47:48 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog " << copy.type << " is created by copy constructor" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) 
{
    this->type = copy.type;
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark Bark I'm a dog" << std::endl;
}
