#include <stdio.h>
#define size 10

int main()
{
    //Declaring an array with 10 positions to int numbers
    int array[size];
    int i; //the counter to loop for

    //Getting values to each array's positions
    for (i = 0; i < size; i++)
    {
        printf("Array posisiton %i insert a int value: ", i);
        scanf("%d", &array[i]);
    }

    printf("Values storeds in the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}