/*

input : 85      66      3       76      93      88           iStart = 60;  iEnd = 90;

Output : 85      66      76      88


input : 85      66      3       76      93      88           iStart = 30;  iEnd = 50;

Output :  There is Not avalible Number between 30 to 50 in Array
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept N Number From User And Accept Another 2 Number from User And Display 2Number during Number in Array 
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 27/12/2022
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
    public void DisplayRange(int iStart, int iEnd)
    {
        int iCnt = 0;
        int iCount = 0;
        
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");
                iCount++;
            }
            
        }
        if(iCount == 0)
        {
            System.out.println(" There is Not avalible Number between "+iStart+ " to "+iEnd+ " in Array ");
        }
        
        
        
    }
}
class Assignment34_4
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        int iValue1 = 0;
        int iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array you Want to create ");
        iSize = sobj.nextInt();

        

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the Starting Number");
        iValue1 = sobj.nextInt();

         System.out.println("Enter the Ending Number");
        iValue2 = sobj.nextInt();

        obj.DisplayRange(iValue1,iValue2);
        
      

        
        


    }
}
