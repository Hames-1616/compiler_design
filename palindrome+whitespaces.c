#include<stdio.h>
#include<string.h>
void main()
{
    int plaindrome = 0;
    char original[20];
    char stuffed[20];
    int index=0;
    printf("enter the String with whitespaces\n");
    gets(original);
    for(int i=0;i<sizeof(original);i++)
    {
        if(original[i]!=' ')
        {
            stuffed[index] = original[i];
            index++;
        }
    }
        for(int i=0;i<strlen(stuffed);i++)
    {
        if(stuffed[i] != stuffed[strlen(stuffed)-i-1])
        {
            plaindrome = 1;
            break;
        }
    }

    plaindrome ? printf("String is not plaindrome"):printf("string is palindrome");
}