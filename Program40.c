#include<stdio.h>

void DisplayRevers( int iNo)
{
    int iCnt=0;
    
    iCnt=iNo;
    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
         iCnt--;
    }
       
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayRevers(iValue);

    return 0;
}