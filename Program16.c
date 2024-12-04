// Demonstation for itaration using loop
#include<stdio.h>

void PrintX()
{
    int iCnt=0;
    
    //    1         2       3
    for(iCnt=1; iCnt<=5; iCnt++ )
    {
        printf("Jay Ganesh..\n"); //4
    }
}

int main()
{
    PrintX();

    return 0;    
}

// 1 : Write the common statement in the loop block
// 2 : Check whether the number of iterations are already known or not
// 3 : If the itrations count is fixed then go for (for loop)
// 4 : If iteration count is not fixed then go for while.
