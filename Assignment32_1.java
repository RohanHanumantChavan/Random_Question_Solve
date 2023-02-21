/*

input : 85      66      3       80      93      88

Output : 53  (234 - 181)
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept N Number From User And return Difference of Even and Odd  ElementSummination 
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 25/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+Arr.length+" Elements ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1)+" No ");
            Arr[iCnt] = sobj.nextInt();
        }

        

     }
     public void Display()
     {
        int iCnt = 0;
        System.out.println("Elements of Array Are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+" \t");
        }
        System.out.println();


     }

}
class MarvellousX extends ArrayX
{
    MarvellousX(int iSize)
    {
        super(iSize);
    }
    public int DiffOfEvenAndOddSum()
    {
        int iCnt = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        int iDiff = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else 
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        iDiff = iEvenSum - iOddSum;
        return iDiff;
    }
}
class Assignment32_1
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array you Want to create ");
        iSize = sobj.nextInt();

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();

        iRet = obj.DiffOfEvenAndOddSum();
        System.out.println("Differences of Even And Odd Summation is : "+iRet);


    }
}
