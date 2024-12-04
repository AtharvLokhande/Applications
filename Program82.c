#include<Stdio.h>
#include<stdlib.h>

int Minimam(int Arr[],int iSize)
{
    int iMin = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)  //N
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *ptr=NULL;
    int iLength =0, i=0, iRet = 0;

    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter hte element :\n");
    for(i=0;i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Minimam (ptr,iLength);

    printf("Maximum Number is : %d\n",iRet);

    free (ptr);

    return 0;
}