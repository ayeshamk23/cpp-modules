#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


int main(void) {
	try {
		Intern someRandomIntern;

		AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy", "Bender");

		if (rrf) {
			std::cout << *rrf << std::endl;
			delete rrf;
		} else {
			std::cout << "Form creation failed. Nothing to print or delete.\n";
		}
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}