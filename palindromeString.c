#include<stdio.h>
#include<string.h>
void main(){
    int plaindrome = 0;
    char input[10];
    printf("Enter the String : ");
    gets(input);

    for(int i=0;i<strlen(input);i++)
    {
        if(input[i] != input[strlen(input)-i-1])
        {
            plaindrome = 1;
            break;
        }
    }

    plaindrome ? printf("String is not plaindrome"):printf("string is palindrome");
}