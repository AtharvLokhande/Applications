#include<stdio.h>


int Summation(int iValue)
{
    int iSum = 0;
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iSum = iSum + iCnt;
    }
     
     return iSum;
}

int main()
{
    int iNo = 0;
    printf("Enter the number for adiition:\n");
    scanf("%d",&iNo);
    int iRet = 0;
    
    iRet=Summation(iNo);

    printf("Summation is: %d",iRet);

    return 0;
}