#include <stdio.h>
#include <string.h>

//This program count the number of letters in a word

int main()
{
    char word[10];

    printf("Write a word without blank spaces: \n");

    gets(word);

    printf("The word you typed has %d letters.", strlen(word));
}
