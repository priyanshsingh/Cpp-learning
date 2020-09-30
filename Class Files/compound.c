#include <stdio.h>
#include <math.h>

int main()
{
    // A =	final amount
    // P =	initial principal balance
    // r =	interest rate
    // n =	number of times interest applied per time period
    // t =	number of time periods elapsed

    int p = 10000;
    float r = 5.00;
    int n = 2;
    float t = 5.00;

    float x = r / n;
    float y = n * t;
    float sum = 1.00 + x;
    float w = pow(sum, y);
    printf("The final amount is = %f", p * w);

    return 0;
}