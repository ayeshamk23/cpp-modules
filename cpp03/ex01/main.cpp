/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:10:01 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:10:03 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap1("Aysha",50, 30, 10);
	clap1.currentStatus();
    
    clap1.attack("Fidha");
	clap1.currentStatus();

    clap1.takeDamage(10);
    clap1.currentStatus();

    clap1.beRepaired(15);
    clap1.currentStatus();
    clap1.beRepaired(5);

    clap1.guardGate();
    clap1.takeDamage(60);
    clap1.attack("Insha");
    clap1.takeDamage(60);

    clap1.currentStatus();


    return 0;
}