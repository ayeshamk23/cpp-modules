/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:12:22 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/15 11:12:25 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name) :name(_name), weapon(NULL) {}

void	HumanB::setWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " attacks with their bare hands" << std::endl;
	else
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}
