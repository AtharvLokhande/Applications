// Input : 51
// Output : 2

// Input : 7151
// Output : 4

#include<stdio.h>

int CoutDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iCnt++;
    }

    return iCnt;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CoutDigits(iValue);

    printf("Number of digit are :%d\n",iRet);
    return 0;
}