/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:09:07 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:09:13 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(" "), healthPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "copy constructor is called" << std::endl;
    std::cout << "ClapTrap " << name << " is created" << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{   
        this->name = copy.name;
        this->healthPoints = copy.healthPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;

    std::cout << "assigment operator is called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const std::string& name,unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage) : name(name), healthPoints(healthPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

// Check if the ClapTrap has enough energy points to perform an attack
// and if the attack damage is less than or equal to its energy points.
void ClapTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && attackDamage <= energyPoints)
    {
    std::cout << "ClapTrap " << name << " attacks " << target;
    std::cout << " causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
    }
    else if (energyPoints <= 0 || attackDamage > energyPoints)
    std::cout << "ClapTrap " << name << " doesn't have enough points!" << std::endl;
    
}

// Check if ClapTrap is still alive and if the damage amount is less than or equal to current health points.
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->healthPoints > 0 && amount <= this->healthPoints)
    {
        this->healthPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
    }
    else if (this->healthPoints <= 0)
    std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
    else 
    std::cout << "no enough points to damage this much!!!" << std::endl;
}


// Check if there are enough energy points to perform the repair
// and if the repair amount is less than or equal to the energy points.
void ClapTrap::beRepaired (unsigned int amount)
{
    if (this->energyPoints > 0 && amount <= this->energyPoints)
    {
        this->healthPoints += amount;
        this->energyPoints -= amount;
        
        std::cout << "ClapTrap " << name << " repairs it self with " << amount << " health points!!" << std::endl;
    }
    else
    
    std::cout << "no enough energy points to excute such repair!!!" << std::endl;
}

// Print the current status of ClapTrap including health points,
// energy points, and attack damage.
void	ClapTrap::currentStatus() const
{
	std::cout << "ClapTrap " << name << " has " << healthPoints << " hit points, " << energyPoints << " energy points and " << attackDamage << " attack damage" << std::endl;
}