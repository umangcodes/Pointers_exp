#include <stdio.h>

// constants
#define SIZE 100
// make a program which uses pounters to initialize thhe array.
int array[SIZE];


void initializeArray(int*ptrToArray)
{
    int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        *(ptrToArray+index) = index;
    }

}
void printArray(int*ptr)
{
    int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        printf("The value for the Array location %d : %d\n",index, *(ptr+index));
    }
}

int main()
{
    /*int *ptr;
    ptr = &array[0];
    int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        *(ptr+index)=0;
    }*/
    printArray(&array[0]);
    initializeArray(&array[0]);
    printArray(&array[0]);
    return 0;
}

