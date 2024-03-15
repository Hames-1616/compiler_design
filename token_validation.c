#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    gets(s);

    char token[100];

    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] == '{' || s[i] == '(')
        {
            // printf("4");
            token[i] = '4';
        }
        else if(isdigit(s[i]))
        {
            
            // printf("6");
            token[i] = '6';
        }
        else if(s[i] == '+')
        {
            // printf("2");
            token[i] = '2';
        }
        else if(s[i] == '*')
        {
            // printf("3");
            token[i] = '3';
        }
        else if(s[i] == '}' || s[i] == ')')
        {
            // printf("5");
            token[i] = '5';
        }
    }
    printf("%s",token);

}