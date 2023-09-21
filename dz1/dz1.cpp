#include "Head.h"
void DrawLine(int, string, Colors, bool);
int main()
{
    DrawLine(20, "@", GREEN, false);
}

void DrawLine(int count, string t, Colors color, bool c)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    for (int i = 0; i < count; i++)
    {
        if (c == true)
        {
            cout << t;
        }
        else
        {
            cout << t << "\n";
        }
    }
        
    Sleep(2000);
}
