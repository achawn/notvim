#include "stdio.h"
#include "stdlib.h"
#include "ncurses.h"

int main() {
	initscr();
	printw("Hello, World!");
	refresh();
	getch();
	endwin();
	return 0;
}
