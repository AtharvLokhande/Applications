// Count white space in string

#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);

    printf("Number of White Space is : %d\n",iRet);

    return 0;
}