/* 
Practical 2.1: Ram, Mohan and Sohan took loan of Rs. x, y and z on rate of interest 
r%, p%, q% for time t1, t2 and t3 years respectively.Calculate simple interest they will pay and 
find who will pay the most using ternary operator?
*/

#include <stdio.h>

int main()
{
    int x, y, z, t1, t2, t3, r, p, q;
    float s1, s2, s3;

    printf("Enter Principal, Time, Rate for Ram = ");
    scanf("%d %d %d", &x, &t1, &r);
    printf("\n");

    printf("Enter Principal, Time, Rate for Mohan = ");
    scanf("%d %d %d", &y, &t2, &p);
    printf("\n");

    printf("Enter Principal, Time, Rate for Sohan = ");
    scanf("%d %d %d", &z, &t3, &q);
    printf("\n");

    s1 = (x * t1 * r) / 100;
    s2 = (y * t2 * p) / 100;
    s3 = (z * t3 * q) / 100;

    printf("\nSI to be paid by RAM = %0.2f\n", s1);
    printf("\nSI to be paid by MOHAN = %0.2f\n", s2);
    printf("\nSI to be paid by Sohan = %0.2f\n", s3);

    printf("\n");

    (s1 > s2) ? (s1 > s3) ? printf("Ram will have to pay maximum amount") : printf("Sohan will have to pay maximum amount")
              : (s2 > s3) ? printf("Mohan will have to pay maximum amount") : printf("Sohan will have to pay maximum amount");

    return 0;
}