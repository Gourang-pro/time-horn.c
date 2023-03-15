#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int time, i;

    printf("Enter the time (in seconds) for the time horn: ");
    scanf("%d", &time);

    for(i = time; i >= 1; i--)
    {
        printf("\r%d", i);
        Sleep(1000);
    }

    printf("\n\n*** TIME HORN ***\n\n");

    return 0;
}
