
#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
    std::string type;
    
    public:
    Animal();
    Animal(const Animal &copy);
    Animal& operator=(const Animal &copy);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
#endif