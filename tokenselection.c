#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    char token[100];
    gets(s);

    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] == '{' || s[i] == '(')
        {
            printf("4");
        }

        else if(isdigit(s[i]))
        {
            while(isdigit(s[i+1]))
            {
                i++;
            }
            printf("6");
        }

        else if(s[i] == '+')
        {
            printf("2");
        }

        else if(s[i] == '*')
        {
            printf("3");
        }

        else if(s[i] == '}' || s[i] == ')')
        {
            printf("5");
        }
    }
}