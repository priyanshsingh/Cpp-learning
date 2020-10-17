/*Practical 2.3: Write a C program to find out year in which Mr. Kavi was born from the following information.
a)    Kavi is m years younger than his mother.
b)    Kavi’s brother who born in year y(1900<=y<=2019) is n years younger to his mother
c)    If Kavi’s brother is reading in class r then On the basis of your common sense also predict
    In which class Kavi is reading?
*/

#include <stdio.h>

int main()
{
    int m, n, y, r;

    printf("\nEnter the number of years Kavi is younger than his mom = ");
    scanf("%d", &m);
    printf("\n");

    printf("Enter the number of years Kavi's brother is younger than his mom = ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter the Year of Birth of Kavi's Brother between 1900 and 2019 = ");
    scanf("%d", &y);
    printf("\n");

    printf("In which class is Kavi's Brother studying in ? ");
    scanf("%d", &r);
    printf("\n");

    int age = y - n + m;

    printf("******************************************************\n");

    printf("Kavi was born in the year %d", age);
    printf("\n");

    int c = r + n - m;

    (c > 12) ? printf("\nKavi is in college and his class cannot be predicted")
             : ((c >= 1) ? printf("\nKavi is in class %d", c) : printf("\nKavi is in pre-primary section"));

    return 0;
}