import java.util.*;

class Digits
{
    public boolean CheakArmstrong(int iNo)
    {
        int iDigitCount = 0;
        int iTemp = iNo;
        int iDigit = 0;
        int iCnt = 0, iPower = 1, iSum = 0;

        while(iTemp != 0)
        {
            iDigitCount++;
            iTemp = iTemp / 10;
        }

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            for(iCnt = 1; iCnt <= iDigitCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;

            iTemp = iTemp / 10;
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program257
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheakArmstrong(iNo);
        if(bRet == true)
        {
            System.out.println(iNo+" is a Armtrong number.");
        }
        else
        {
            System.out.println(iNo+" is not a Armtrong number.");
        }        
    }
}