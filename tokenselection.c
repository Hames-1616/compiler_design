#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    gets(s);

    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] == '{' || s[i] == '(')
        {
            printf("5");
        }

        else if(isdigit(s[i]))
        {
            while(isdigit(s[i+1]))
            {
                i++;
            }
            printf("1");
        }

        else if(s[i] == '+')
        {
            printf("2");
        }
    }
}