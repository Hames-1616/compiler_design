#include<stdio.h>
void main(){

    int original,reversed=0,number;
    printf("Enter the Number : ");
    scanf("%d",&original);
    number = original;
    while (number != 0)
    {
        int remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number/10; 
    }
    original == reversed ? printf("Number is palindrome"):printf("Number is not Plaindrome");
}