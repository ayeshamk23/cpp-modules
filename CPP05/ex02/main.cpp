
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 46);
        std::cout << "\n==== Bureaucrat Info ====\n";
        std::cout << bob << std::endl;

        std::cout << "\n==== Shrubbery Creation ====\n";
        ShrubberyCreationForm shrub("home");
        std::cout << shrub << std::endl;

        bob.signForm(shrub);
        bob.executeForm(shrub);

        std::cout << "\n==== Robotomy Request ====\n";
        RobotomyRequestForm robot("Bender");
        std::cout << robot << std::endl;

        bob.signForm(robot);
        bob.executeForm(robot);

        std::cout << "\n==== Presidential Pardon ====\n";
        PresidentialPardonForm pardon("Rick");
        std::cout << pardon << std::endl;

        bob.signForm(pardon);
        bob.executeForm(pardon);
    }
    catch (std::exception& e) {
        std::cerr << "\n Exception: " << e.what() << std::endl;
    }

    return 0;
}