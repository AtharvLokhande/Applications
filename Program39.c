#include<stdio.h>

void DisplayRevers( int iNo)
{
    int iCnt=0;
    printf("_______________________________________\n");
    for(iCnt=iNo; iCnt>=0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
        printf("______________________________________");
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayRevers(iValue);

    return 0;
}