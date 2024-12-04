// Copy one sting to another empty sting

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
     *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);      // strcpy(100,200);

    printf("Copied string is:\n%s",Brr);

    return 0;
}