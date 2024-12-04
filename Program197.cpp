#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory for recources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];      // in c -- Arr = (int*)malloc(iSizeof(int)):
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources.."<<"\n";
            delete[]Arr;
        }

        void Accept()
        {
            cout<<"Enter the element of array :"<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Enter the element of array :"<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the size of array :"<<"\n";
    cin>>iLength;

    ArrayX * obj = new ArrayX(iLength);

    obj->Accept();
    obj->Display();

    return 0;
}