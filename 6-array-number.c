#include <stdio.h>
//#define size 10

int main()
{
    //Declaring an array with 10 positions to int numbers
    int array[size], arrLen;
    int i; //the counter to loop for

    printf("Insert int value for the array quantity: ");
    scanf("%d", &arrLen);
    
    //Getting values to each array's positions
    for (i = 0; i < arrLen; i++)
    {
        printf("Array posisiton %i insert a int value: ", i);
        scanf("%d", &array[i]);
    }

    printf("Values storeds in the array:\n");
    for (i = 0; i < arrLen; i++)
    {
        printf("%d", array[i]);
    }
}
