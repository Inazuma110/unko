#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
  initscr();
  noecho();
  curs_set(0);
  int y, x;
  getmaxyx(stdscr, y, x);

  const char unko1[] =
    "    ((\n"
    "  (____)\n"
    " (______)\n"
    "(________)\n";

  const char unko2[] =
    "    ))\n"
    "  (____)\n"
    " (______)\n"
    "(________)\n";


  for (int i = 0; i < 3; i++) {
    clear();
    mvprintw(0, 0, unko1);
    refresh();
    sleep(1);
    clear();
    mvprintw(0, 0, unko2);
    refresh();
    sleep(1);
  }
  endwin();
}
