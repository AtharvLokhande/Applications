#include<stdio.h>

// 0(N/2) time complacity

int SumFactors(int iNo)  
{
    int iSum = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);
    printf("Sumation of Factor:%d\n",iRet);
    
    return 0;
}