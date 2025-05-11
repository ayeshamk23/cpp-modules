/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:10:49 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:10:52 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constractor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap&copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "FragTrap copy constractor is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    this->name = copy.name;
    this->healthPoints = copy.healthPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;

    std::cout << "FragTrap assigment operator is called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destractor is called" << std::endl;
  
}

FragTrap::FragTrap(const std::string &name, unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage)
:ClapTrap(name,healthPoints,energyPoints, attackDamage)
{
    std::cout << "FragTrap " << name << " is created" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is asking for high fives" << std::endl;
}