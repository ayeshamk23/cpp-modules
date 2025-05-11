#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bob("bob", 44);
		std::cout << bob << std::endl;

		bob.increment();
		std::cout << bob << std::endl;

		std::cout << "------------------------" << std::endl;

		Form launchForm("Launch Form", 42, 42);
		std::cout << launchForm << std::endl;

		bob.signForm(launchForm);

		std::cout << "------------------------" << std::endl;

		bob.increment();
		std::cout << bob << std::endl;

		bob.signForm(launchForm);
		std::cout << launchForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}