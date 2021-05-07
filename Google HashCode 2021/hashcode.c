#include <stdio.h>
#include <string.h>

int main()
{
    int D, L, S, I, V, F;
    int start, end;

    //D = duration of simulation in secs, L = time from start to end
    //S = number of streets, I = number of intersention
    //V = no. of cars, F = points scored
    int i;
    char name[29];

    scanf("%d %d %d %d %d", &D, &I, &S, &V, &F);
    scanf("%d %d", &start, &end);

    gets(name);

    scanf("%d", &L);

    printf("%d %d %d %d %d %d %d %d", D, I, S, V, F, start, end, L);

    puts(name);

    return 0;
}