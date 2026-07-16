#include "UIUtils.h"
#include "ExitGame.h"

#include <algorithm>
#include <cctype>
#include <iostream>

void UIUtils::print_text(std::string_view text)
{
	std::cout << text;
}

void UIUtils::print_text(std::string_view text, int text_color, int bg_color)
{
	std::cout << TextUtils::apply_styling(text, text_color, bg_color);
}

void UIUtils::print_text(std::string_view text, const std::vector<int>& formatting)
{
	std::cout << TextUtils::apply_styling(text, formatting);
}

void UIUtils::print_text(std::string_view text, const std::vector<int>& formatting, int text_color,
	int bg_color)
{
	std::cout << TextUtils::apply_styling(text, formatting, text_color, bg_color);
}

void UIUtils::print_line(std::string_view text)
{
	print_text(text);
	std::cout << std::endl;
}

void UIUtils::print_line(std::string_view text, int text_color, int bg_color)
{
	print_text(text, text_color, bg_color);
	std::cout << std::endl;
}

void UIUtils::print_line(std::string_view text, const std::vector<int>& formatting)
{
	print_text(text, formatting);
	std::cout << std::endl;
}

void UIUtils::print_line(std::string_view text, const std::vector<int>& formatting, int text_color,
	int bg_color)
{
	print_text(text, formatting, text_color, bg_color);
	std::cout << std::endl;
}

void UIUtils::read_input(std::string& output)
{
	std::getline(std::cin, output);
	if (output == "q" || output == "Q") throw ExitGame(0);
}

std::string UIUtils::get_input(std::string_view prompt)
{
	std::string input;
	print_line(prompt);
	read_input(input);
	return input;
}

std::string UIUtils::get_input(std::string_view prompt, const std::vector<std::string_view>& options)
{
	std::string input;
	while (true)
	{
		print_line(prompt);
		read_input(input);
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		if (std::find(options.begin(), options.end(), input) != options.end())
		{
			return input;
		}
		else
		{
			print_line("Invalid Input.\n");
		}
	}
}