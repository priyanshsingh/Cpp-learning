#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char num[1000];
    gets(num);
    int s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0;

    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] == '0')
            s0++;
        if (num[i] == '1')
            s1++;
        if (num[i] == '2')
            s2++;
        if (num[i] == '3')
            s3++;
        if (num[i] == '4')
            s4++;
        if (num[i] == '5')
            s5++;
        if (num[i] == '6')
            s6++;
        if (num[i] == '7')
            s7++;
        if (num[i] == '8')
            s8++;
        if (num[i] == '9')
            s9++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d ", s0, s1, s2, s3, s4, s5, s6, s7, s8, s9);
    return 0;
}
