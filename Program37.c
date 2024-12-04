#include<stdio.h>

int SumNonFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;
    printf("Non factors of %d are:\n",iNo);
    for(iCnt=1;iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet=0;
    
    printf("Enter hte number\n");
    scanf("%d",&iValue);

    iRet= SumNonFactor(iValue);
    printf("Sumation of non factors %d\n",iRet);


    return 0;
}