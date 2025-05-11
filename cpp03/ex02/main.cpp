/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:11:12 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:11:14 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap clap1("ayman",50, 30, 10);
	clap1.currentStatus();
    
    clap1.attack("mahmoud");
	clap1.currentStatus();

    clap1.takeDamage(10);
    clap1.currentStatus();

    clap1.beRepaired(15);
    clap1.currentStatus();
    clap1.beRepaired(5);

    clap1.highFivesGuys();
    clap1.takeDamage(60);
    clap1.attack("mahmoud");
    clap1.takeDamage(60);

    clap1.currentStatus();


    return 0;
}