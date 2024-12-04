#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];  
    }
    return Sum;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data,4);

    cout<<"Addition of integers :"<<iRet<<"\n";

    float Dataf[] = {90.2f,9.23f,85.9f,23.78f};
    float fRet = Addition(Dataf,4);

    cout<<"Addition of Float :"<<fRet<<"\n";


    return 0; 
}