#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);

int main(void) {
    
    int m = 0;
    int x = 20;
    int y = 10;

    while (m != 8)
    {
        gotoxy(x, y);
        printf("o");

        scanf("%d", &m);
        switch (m)
        {
        case 1:
            x += 2;
            break;
        case 2:
            x -= 2;
            break;
        case 3:
            y += 1;
            break;
        case 4:
            y -= 1;
            break;
        
        default:
            break;
        }
        system("cls");
    }

    /*
    gotoxy(2,4);
    printf("Hello");
    gotoxy(40, 20);
    printf("Hello");    
    */

    return 0;
}

void gotoxy(int x, int y) {
    COORD Pos = {x-1, y-1};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}