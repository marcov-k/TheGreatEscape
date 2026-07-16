#include "TheGreatEscape.h"
#include "ExitGame.h"
#include "UIUtils.h"

#include <iostream>

int main()
{
	try
	{
		std::string input = UIUtils::get_input("Continue? y/n", { "y", "n" });
		UIUtils::print_line("Input received: " + input);
	}
	catch (const ExitGame& e)
	{
		std::cout << std::endl << "Game Closed." << std::endl;
		return e.exit_code;
	}
	catch (const std::exception& e)
	{
		std::cerr << std::endl << "Unexpected error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}