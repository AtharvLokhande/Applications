#include<stdio.h>

int AdditionOfNumbers(int iNo1, int iNo2)
{
    int iRet = 0;

    iRet = iNo1 + iNo2 ;

    return iRet;
}

int main()
{
    int iValue1 = 0; int iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    iRet = AdditionOfNumbers(iValue1,iValue2);

    printf("The addition of two number is: %d\n",iRet);

    return 0;

}