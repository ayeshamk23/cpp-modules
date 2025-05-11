/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:10:03 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/15 11:10:06 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *heapZ;

    heapZ = newZombie("Heap Zombie");
    heapZ->announce();
    delete heapZ;

    randomChump("Stack Zombie");
}