#pragma once

#include <stdexcept>

struct ExitGame : public std::runtime_error
{
	int exit_code;
	
	ExitGame(int code) : std::runtime_error("Game Closed."), exit_code(code) {}
};