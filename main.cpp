#include <ncurses.h>

int main() {
    // Initialize NCurses
    initscr();

    // Create a window
    WINDOW* win = newwin(10, 40, 5, 10);

    // Draw a box around the window
    box(win, 0, 0);

    // Print a message in the window
    mvwprintw(win, 2, 2, "Hello World!");

    // Refresh the window
    wrefresh(win);

    // Wait for a key press
    getch();

    // End NCurses mode
    endwin();

    return 0;
}
