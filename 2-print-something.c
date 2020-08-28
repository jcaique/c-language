#include <stdio.h>
#include <string.h>

int main()
{
    char phrase[30];

    printf("Type something: \n");

    gets(phrase);

    printf("You typed: %s", phrase);
}
