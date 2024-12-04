// INput : 7985674
// Output : 4 occures 1 time
//          5 occures 1 time
//          6 occures 1 time
//          7 occures 1 time
//          8 occures 1 time
//          9 occures 1 time

#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Ferquency[10] = {0};

            while(iTemp !=0)
            {
                iDigit = iTemp % 10;
                Ferquency[iDigit]++;
                iTemp = iTemp / 10;
            }
            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Ferquency[iCnt]>0)
                {
                    cout<< iCnt <<" occurs at "<< Ferquency[iCnt] << " times " << "\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Please enter number :"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    return 0;
}