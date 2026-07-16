#include "TextUtils.h"

#include <iostream>

std::string TextUtils::apply_styling(std::string_view text, int text_color, int bg_color)
{
	return apply_styling(text, {}, text_color, bg_color);
}

std::string TextUtils::apply_styling(std::string_view text, const std::vector<int>& formatting)
{
	return apply_styling(text, formatting, TEXT_DEFAULT);
}

std::string TextUtils::apply_styling(std::string_view text, const std::vector<int>& formatting, int text_color, int bg_color)
{
	std::string output = "\033[" + std::to_string(text_color) + ";" + std::to_string(bg_color);
	for (int format : formatting)
	{
		output += ";" + std::to_string(format);
	}
	output += "m";
	output.append(text);
	output += "\033[0m";
	return output;
}

void TextUtils::set_style(int text_color, int bg_color)
{
	set_style({}, text_color, bg_color);
}

void TextUtils::set_style(const std::vector<int>& formatting)
{
	set_style(formatting, TEXT_DEFAULT);
}

void TextUtils::set_style(const std::vector<int>& formatting, int text_color, int bg_color)
{
	std::string styling = "\033[" + std::to_string(text_color) + ";" + std::to_string(bg_color);
	for (int format : formatting)
	{
		styling += ";" + std::to_string(format);
	}
	styling += "m";
	std::cout << styling;
}

void TextUtils::clear_style()
{
	std::cout << "\033[0m";
}

void TextUtils::clear_console()
{
	std::cout << "\033[H\033[3J" << std::flush;
}