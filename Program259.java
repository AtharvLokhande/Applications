import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Please enter"+Arr.length+"elements");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no :"+(iCnt+1));
            Arr[iCnt]= sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Element of array are :");

        for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class Program259
{
    public static void main(String ar[])
    {
        ArrayX obj = new ArrayX(5);
        obj.Accept();
        obj.Display();
    }
}