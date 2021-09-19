#include <stdio.h>

void fun();
void fun1();

int main()
{
    fun();
    printf("\nQUIT");
}

void fun()
{
    static int a = 1;
    printf("%d\t", a);
    a++;
    if (a <= 10)
        fun1();
}

void fun1()
{
    fun();
}