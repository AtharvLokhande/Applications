// Demonstation for itaration using loop

#include<stdio.h>

void PrintX(int iValue)
{
    int iCnt=0;

    iCnt =1;
    while (iCnt<=iValue)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iteration : \n");
    scanf("%d",&iNo);

    PrintX(iNo);

    return 0;    
}