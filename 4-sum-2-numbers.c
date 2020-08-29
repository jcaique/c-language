#include <stdio.h>

/*
    This program sum two number until 
    the user stop
*/

int main()
{
    float number1, number2, result;
    int stop = 1;

    while (stop == 1)
    {
        printf("Type the first number: \n");
        scanf("%f", &number1);

        printf("Type the second number: \n");
        scanf("%f", &number2);

        result = number1 + number2;

        system("cls");

        printf("Result of the sum by %f + %f: %.2f \n", number1, number2, result);

        printf("Type 1 to continue or any for stop.\n");
        scanf("%d", &stop);
    }

    printf("That's cool!");
}