#include<stdio.h>

void DisplayTable( int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=10; iCnt++)
    {
        printf("%d\n",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}