/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:12:43 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/15 11:12:47 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(std::string _type) : type(_type) {}

void	Weapon::setType(std::string _type)
{
	type = _type;
}

const std::string&	Weapon::getType() const
{
	return (type);
}