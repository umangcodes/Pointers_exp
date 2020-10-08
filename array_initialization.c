#include <stdio.h>

// constants
#define SIZE 0
// make a program which uses pounters to initialize thhe array.


void initializeArray(int *ptrToArray)
{
    int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        *(ptrToArray+index) = 0;
    }

}
void printArray(int *ptr)
{
     int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        printf("The value for the Array location %d : %d",index, *(ptr+index));
    }
}

int main()
{

    int array[SIZE];
    /*int *ptr;
    ptr = &array[0];
    int index = 0;
    for(index = 0; index <= SIZE; index++)
    {
        *(ptr+index)=0;
    }*/
    printArray(array[]);
    initializeArray(array[]);
    printArray(array[]);
    return 0;
}

