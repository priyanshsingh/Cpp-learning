//ADT : Abstract data types - 1. MRF (Minimal Required Functionalities) 2. Operations(like sorting, push pop etc.)

#include <iostream>
using namespace std;

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;

};

void createArray(struct myArray * a, int tSize, int uSize){
    (*a).total_size = tSize;
    (*a).used_size = uSize;
}

int main()
{
    struct myArray marks;
    createArray(&marks, 100, 20);   


    return 0;
}