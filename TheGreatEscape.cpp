#include "TheGreatEscape.h"
#include "TextUtils.h"

#include <iostream>

int main()
{
	TextUtils::set_style(TextUtils::TEXT_RED);
	std::cout << "Hello World!" << std::endl;
	TextUtils::set_style({ TextUtils::UNDERLINE });
	std::cout << "Hello World! (Important)" << std::endl;
	TextUtils::clear_style();
	std::cout << "Hello World! (Boring)" << std::endl;
}