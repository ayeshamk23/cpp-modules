#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Bob("Bob", -1);
        std::cout << Bob << std::endl;
        Bob.increment();
        std::cout << Bob << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------" << std::endl;

    try 
    {
        Bureaucrat Jane("Jane", 150);
        std::cout << Jane << std::endl;
        Jane.decrement();
        std::cout << Jane << std::endl;
        Jane.decrement();
        std::cout << Jane << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}