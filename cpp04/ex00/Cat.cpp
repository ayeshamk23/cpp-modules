/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:47:37 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:47:39 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Cat " << copy.type << " is created by copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) 
{
    this->type = copy.type;
    return *this;
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow! I'm a Cat!" << std::endl;
}
