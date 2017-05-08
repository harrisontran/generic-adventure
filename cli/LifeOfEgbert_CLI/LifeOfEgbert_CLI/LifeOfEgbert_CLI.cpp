#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>
#include <windows.h>
#include <limits>

using namespace std;

const int CONSOLE_BLACK = 0;
const int CONSOLE_BLUE = 1;
const int CONSOLE_GREEN = 2;
const int CONSOLE_CYAN = 3;
const int CONSOLE_RED = 4;
const int CONSOLE_PURPLE = 5;
const int CONSOLE_DARKYELLOW = 6;
const int CONSOLE_WHITE = 7;
const int CONSOLE_GRAY = 8;
const int CONSOLE_BRIGHTBLUE = 9;
const int CONSOLE_LIGHTGREEN = 10;
const int CONSOLE_BRIGHTCYAN = 11;
const int CONSOLE_BRIGHTRED = 12;
const int CONSOLE_PINK = 13;
const int CONSOLE_YELLOW = 14;
const int CONSOLE_BRIGHTWHITE = 15;


void setColor(int value) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void printText(string text, int fg = 7, int bg = 0) {
	int color = 16 * bg + fg;
	setColor(color);
	cout << text;
	cin.ignore();
}

string inputText() {
	setColor(CONSOLE_WHITE);
	string input;
	cout << "\t > ";
	cin >> input;
	cin.ignore();
	return input;
}

void startup() {
	SetConsoleTitle(TEXT("Life of Egbert"));
	system("color 07");
}

int main() {
	startup();
	printText("Hello... entity.", CONSOLE_WHITE);
	printText("It seems the air is a bit mild, though humid. It's green with trees in all directions.", CONSOLE_GRAY);
	printText("I feel you...", CONSOLE_LIGHTGREEN);
	inputText();
	printText("I know you're there...",CONSOLE_LIGHTGREEN);
	return 0;
}

