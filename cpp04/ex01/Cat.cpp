/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:49:15 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:49:17 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    brain = new Brain();
    *this = copy;
    std::cout << "Cat " << copy.type << " is created by copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) 
{
    *brain = *copy.brain;
    this->type = copy.type;
    return *this;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow! I'm a Cat!" << std::endl;
}

