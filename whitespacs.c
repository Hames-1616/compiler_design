#include<stdio.h>
void main()
{
    char o[20];
    char f[20];
    int index=0;
    printf("enter the String with whitespaces\n");
    gets(o);
    for(int i=0;i<sizeof(o);i++)
    {
        if(o[i]!=' ')
        {
            f[index] = o[i];
            index++;
        }
    }
    printf("%s\n",f);

    int count = 0;
    for(int i=0;i<sizeof(f);i++)
    {
        if(f[i] != '\0')
        {
            count++;
        }
        else{
            break;
        }
    }
    printf("count = %d",count);
}