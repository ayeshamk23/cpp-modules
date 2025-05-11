/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:12:15 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/15 11:12:18 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string _name, Weapon& _weapon)
	:name(_name), weapon(_weapon) {}


void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}