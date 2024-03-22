/* check where the statement entered is a comment ot not */
#include<stdio.h>
#include<string.h>

void main()
{
    char input[100];
    gets(input);
    int flag = 0;
   
    
        if(input[0] == '/')
        {
            if(input[1] == '/')
            {
                flag = 1;
            }

            else if(input[1] == '*') 
            {
                if(input[strlen(input) - 1] == '/' && input[strlen(input) - 2] == '*')
                {
                    flag = 1;
                }   
            }
        }

        if(flag == 1)
        {
            printf("Statement is a comment");
        }
        else{
            printf("statement is not a comment");
        }
    
}