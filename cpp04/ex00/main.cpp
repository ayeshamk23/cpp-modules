/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:47:56 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/24 20:47:59 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() 
{
	//Create an Animal objects
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();


    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    j->makeSound();
    i->makeSound(); 
	meta->makeSound(); 

	delete i;
	delete j;
	delete meta;
	
	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongAnimal	*i2 = new WrongCat();

	meta2->makeSound(); 
	i2->makeSound();

	delete i2;
	delete meta2;

}