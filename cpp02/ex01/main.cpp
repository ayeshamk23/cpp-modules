/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:11:05 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/15 11:11:07 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	numOfZombies = 4;
	std::string	zombieName = "horde of Zombies";

	Zombie	*zombies = zombieHorde(numOfZombies, zombieName);


	for (int i = 0; i < numOfZombies; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}