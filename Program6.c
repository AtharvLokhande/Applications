#include<stdio.h>

int main()
{
    int iNo1 = 0 ; int iNo2 = 0;
    int iMulti = 0;

    printf("Enter the first number\n");
    scanf("%d",&iNo1);

    printf("Enter the second number\n");
    scanf("%d",&iNo2);

    iMulti = iNo1 * iNo2;

    printf("Multiplacation is: %d\n",iMulti);

    return 0;

}