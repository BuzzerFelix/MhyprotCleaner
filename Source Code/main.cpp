#include "ConsHide.h"
#include <Windows.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
	HWND hwnd;
	ConsoleCommandHide("del mhyprot2.sys");
	hwnd = GetDesktopWindow();
	Sleep(5000);
	if (remove("C:\\Windows\\kmlog.log") == 0) {
		MessageBoxA(hwnd, (LPCSTR)"KMLOG is Successfully Deleted", "Mhyprot Cleaner", 0);
	}
	return 0;
}