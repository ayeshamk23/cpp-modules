
#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
    std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain &operator=(const Brain &copy);
        ~Brain();

        Brain(std::string idea);
        void displayIdeas();
        
    
};

#endif