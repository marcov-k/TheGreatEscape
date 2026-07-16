#pragma once

#include <string>
#include <vector>

namespace TextUtils
{
	// ANSI text colors
	inline constexpr int TEXT_BLACK = 30;
	inline constexpr int TEXT_RED = 31;
	inline constexpr int TEXT_GREEN = 32;
	inline constexpr int TEXT_YELLOW = 33;
	inline constexpr int TEXT_BLUE = 34;
	inline constexpr int TEXT_MAGENTA = 35;
	inline constexpr int TEXT_CYAN = 36;
	inline constexpr int TEXT_WHITE = 37;
	inline constexpr int TEXT_DEFAULT = 39;

	// ANSI text formatting
	inline constexpr int BOLD = 1;
	inline constexpr int UNDERLINE = 4;

	// ANSI background colors
	inline constexpr int BG_BLACK = 40;
	inline constexpr int BG_RED = 41;
	inline constexpr int BG_GREEN = 42;
	inline constexpr int BG_YELLOW = 43;
	inline constexpr int BG_BLUE = 44;
	inline constexpr int BG_MAGENTA = 45;
	inline constexpr int BG_CYAN = 46;
	inline constexpr int BG_WHITE = 47;
	inline constexpr int BG_DEFAULT = 49;

	std::string apply_styling(std::string_view text, int text_color, int bg_color = BG_DEFAULT);

	std::string apply_styling(std::string_view text, const std::vector<int>& formatting);

	std::string apply_styling(std::string_view text, const std::vector<int>& formatting, int text_color, int bg_color = BG_DEFAULT);

	void set_style(int text_color, int bg_color = BG_DEFAULT);

	void set_style(const std::vector<int>& formatting);

	void set_style(const std::vector<int>& formatting, int text_color, int bg_color = BG_DEFAULT);

	void clear_style();

	void clear_console();
}