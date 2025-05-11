/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:10:44 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:10:47 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
    std::string name;
    unsigned int healthPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
    
    public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);
    ~ClapTrap();
    
    ClapTrap(const std::string &name, unsigned int healthPoints = 10, unsigned int energyPoints = 10, unsigned int attackDamage = 0);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void currentStatus() const;

};


#endif