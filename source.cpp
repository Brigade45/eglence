#include <stdio.h>
#include <conio.h>

int main()
{
    int h;
    printf("Olusturmasini istedigi formatin kose boyutunu giriniz :");
    scanf_s("%d", &h);
    for (int c = 1; c <= h; c++)
    {
        for (int a = 1; a <= h; a++)
        {
            printf("+");
            for (int i = 1; i <= 5; i++)
            {
                printf("-");
            }
            if (a == h)
            {
                printf("+\n");
            }
        }
        for (int b = 1; b <= 3; b++)
        {
            for (int a = 1; a <= h; a++)
            {
                printf("I");
                for (int i = 1; i <= 5; i++)
                {
                    printf(" ");
                }
                if (a == h)
                {
                    printf("I\n");
                }
            }
            
        }
        if (c == h)
        {
            for (int z = 1; z <= h; z++)
            {
                printf("+");
                for (int q = 1; q <= 5; q++)
                {
                    printf("-");
                }
                if (z == h)
                {
                    printf("+\n");
                }
            }

        }
    }
    _getch();
    return 0;
}
