/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:09:25 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/21 15:09:27 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("aysha",50, 30, 10);
	clap1.currentStatus();
    
    clap1.attack("fidha");
	clap1.currentStatus();

    clap1.takeDamage(10);
    clap1.currentStatus();

    clap1.beRepaired(15);
    clap1.currentStatus();
    clap1.beRepaired(5);

    clap1.takeDamage(60);
    clap1.attack("insha");
    clap1.takeDamage(60);

    clap1.currentStatus();


    return 0;
}