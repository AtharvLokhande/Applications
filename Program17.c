// Demonstation for itaration using loop

#include<stdio.h>

void PrintX(int iValue)
{
    int iCnt=0;
    
    //    1         2           3
    for(iCnt=1; iCnt<=iValue; iCnt++ )
    {
        printf("Jay Ganesh..\n"); //4
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

