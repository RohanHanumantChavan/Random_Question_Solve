/*

input : 85      66      3       80      93      88           Enter Number is : 66

Output : 66 Number is Present
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept N Number From User And Accept Another Number From user And the That Another Number is Present Or Not
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
    public boolean CheckNumber(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;
       
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
            }
            
        }
        return bFlag;
        
    }
}
class Assignment34_1
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        boolean bRet = false;
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array you Want to create ");
        iSize = sobj.nextInt();

        

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the Single Number");
        iValue = sobj.nextInt();

        bRet = obj.CheckNumber(iValue);
        if(bRet == true)
        {
             System.out.println(+iValue+" Number is Present in Array ");
        }
        else
        {
              System.out.println(+iValue+" Number is Not Present in Array ");
        }

        
        


    }
}
