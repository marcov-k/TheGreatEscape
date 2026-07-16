#pragma once

#include "TextUtils.h"

#include <string>
#include <vector>

namespace UIUtils
{
	void print_text(std::string_view text);

	void print_text(std::string_view text, int text_color, int bg_color = TextUtils::BG_DEFAULT);

	void print_text(std::string_view text, const std::vector<int>& formatting);

	void print_text(std::string_view text, const std::vector<int>& formatting, int text_color,
		int bg_color = TextUtils::BG_DEFAULT);

	void print_line(std::string_view text);

	void print_line(std::string_view text, int text_color, int bg_color = TextUtils::BG_DEFAULT);

	void print_line(std::string_view text, const std::vector<int>& formatting);

	void print_line(std::string_view text, const std::vector<int>& formatting, int text_color,
		int bg_color = TextUtils::BG_DEFAULT);

	void read_input(std::string& output);

	std::string get_input(std::string_view prompt);

	std::string get_input(std::string_view prompt, const std::vector<std::string_view>&options);
}