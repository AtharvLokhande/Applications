// Call by Address

#include<stdio.h>

void strlwX(char *str)
{
    while(*str != '\0')
    {
        if((*str>='A')&&(*str <= 'Z'))
        {
            *str = *str + 32; 
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    strlwX(Arr);

    printf("String after conversion is : %s\n",Arr);

    return 0;
}