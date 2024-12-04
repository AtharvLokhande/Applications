#include<Stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt= (iSize-1); iCnt>=0 ; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
int main()
{
    int *ptr=NULL;
    int iLength =0, i=0;

    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter hte element :\n");
    for(i=0;i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Reverse order array :\n");
    DisplayReverse(ptr,iLength);

    free (ptr);

    return 0;
}