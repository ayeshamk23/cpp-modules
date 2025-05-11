/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:10:54 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:10:56 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const FragTrap& copy);
    FragTrap &operator=(const FragTrap& copy);
    ~FragTrap();
    
    FragTrap(const std::string &name, unsigned int healthPoints = 100, unsigned int energyPoints = 100, unsigned int attackDamage = 30);
    void highFivesGuys(void);

};
#endif