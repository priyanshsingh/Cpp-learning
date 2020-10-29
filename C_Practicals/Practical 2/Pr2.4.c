#include <stdio.h>

int main()
{
    int num, month;
    printf("Enter month in number = ");
    scanf("%d", &month);
    printf("\n");

    printf("Enter number of day = ");
    scanf("%d", &num);
    printf("\n");

    (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 
    (((31 - num) % 7) == 0) ? printf("Day in Friday") : ((31 - num) % 7) == 1 ? printf("Day in Friday") : ((31 - num) % 7) == 2 ? printf("Day in Thursday") : ((31 - num) % 7) == 3 ? printf("Day in Wednesday") : ((31 - num) % 7) == 4 ? printf("Day in Tuesday") : ((31 - num) % 7) == 5 ? printf("Day in Monday") : ((31 - num) % 7) == 6 ? printf("Day in Sunday") : ? printf("Day in Saturday") :

                                                                                                                                                                                                                                                                                                                                                                                                                                                                              return 0;
}