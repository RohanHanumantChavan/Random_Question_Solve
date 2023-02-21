/*

input : 85      66      3       80      93      88           Enter Number is : 66

Output : 66 First Occurances is 2


input : 85      66      3       80      93      88           Enter Number is : 12

Output : 12 First Occurances is:  -1 
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept N Number From User And Accept Another Number From user And the That Another Number And Check First Occurances
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
    public int CheckFirstOccurances(int iNo)
    {
        int iCnt = 0;
        int iCount = -1;
        
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iCount = iCnt;
                break;
            }
            
        }
        return iCount;
        
        
    }
}
class Assignment34_2
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        int iRet = 0;
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array you Want to create ");
        iSize = sobj.nextInt();

        

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the Single Number");
        iValue = sobj.nextInt();

        iRet = obj.CheckFirstOccurances(iValue);
        System.out.println(+iValue+" This Number is First Occurances in Array is : "+iRet);
      

        
        


    }
}
