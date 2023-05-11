#include <iostream>
#include <Windows.h>

int main()
{
    // Set console window size and buffer
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = 80;
    coord.Y = 25;
    SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = coord.Y - 1;
    Rect.Right = coord.X - 1;
    SetConsoleScreenBufferSize(hConsole, coord);
    SetConsoleWindowInfo(hConsole, TRUE, &Rect);

    // Hide console cursor
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(hConsole, &cursorInfo);

    // Set console text color and background color
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);

    // Print message on the console
    std::cout << "Hello World!" << std::endl;

    // Wait for user input
    std::cin.get();

    return 0;
}
