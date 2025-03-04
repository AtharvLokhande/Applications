#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 
//  0000    0000    0000    0000    0000    0001    1100    0000
//    0      0       0       0       0        1       b       0
// 00000200
// 0X00000800

bool CheckBit(UINT No)
{
    UINT iMask = 0X000001c0;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("12th bit is on\n");
    }
    else
    {
        printf("12th bit is off\n");
    }
    return 0;
}