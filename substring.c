#include<stdio.h>
#include<string.h>

int subStringCheck(char *string,char *subString)
{
    int StringLength = strlen(string);
    int subStringLength = strlen(subString);
    if(subStringLength > StringLength)
    {
        return 0;
    }
    else{
            for (int i = 0; i <= StringLength - subStringLength; i++) { 
                int j;
                for(j = 0;j<subStringLength ;j++){

                     if (string[i + j] != subString[j])
                     {
                        break;
                     }

                }
                if (j == subStringLength)
                {
                    return 1;
                }
                
            }
    }
    return 0;
}

void main()
{
    char str[100];
    char subString[100];
    gets(str);
    gets(subString);
    int result = subStringCheck(str,subString);
    if(result)
    {
        printf("Substring Found");
    }
    else{
        printf("Substring not found");
    }
}