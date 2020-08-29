#include <stdio.h>
void double_();
void outPutFloat(float number);

int main()
{
    double_();
}

void double_()
{
    float number, result;

    printf("Type the number you want to double: ");
    scanf("%f", &number);

    result = number * 2;

    outPutFloat(result);
}

void outPutFloat(float number)
{
    printf("The result is: %.2f", number);
}