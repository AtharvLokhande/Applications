// Call by Address

#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str>='a')&&(*str <= 'z'))
        {
            *str = *str - 32; 
        }
        else if((*str>='A')&&(*str <= 'Z'))
        {
            *str = *str + 32; 
        }
        else 
        {
            *str;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);

    printf("String after conversion is : %s\n",Arr);

    return 0;
}