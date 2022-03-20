#pragma once

#include <Windows.h>

void ConsoleCommandHide(const char* args) {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	system(args);
}
