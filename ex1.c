#include <ncurses.h>

int main()
{
	int ch;

	initscr();		/* start ncurses mode */
	raw();			/* Line buffering disabled */
	keypad(stdscr, TRUE);	/* Needed for F1, F2, etc */
	noecho();		/* No echo() while getch */

	printw("Type a character, it will bold\n");
	ch = getch();		/* capture char */
	if (ch == KEY_F(1))
	{
		printw("F1 pressed");
	}
	else
	{
		printw("Key ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}
	refresh();		/* dump imaginary screen */
	getch();		/* wait for user */
	endwin();		/* end curses mode */

	return 0;
}
