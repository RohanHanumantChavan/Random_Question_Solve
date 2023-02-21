/*

input : 85      66      3       80      93      88           

Output : Product of All Odd Elements is : 45


input : 44      66      72      70      10      88        

Output : 0
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept N Number From User And Display All Odd Product in Array
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
    public int DisplayOddNumberProduct()
    {
        int iCnt = 0;
        int iMult = 1;
        
       for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
        {
            if((Arr[iCnt]  % 2) != 0)
            {
                iMult = iMult * Arr[iCnt];
            }
            
        }
        if(iMult == 1)
        {
            iMult = 0;
        }
        return iMult;
        
        
    }
}
class Assignment34_5
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

        

        iRet = obj.DisplayOddNumberProduct();
        System.out.println("Product of All Odd Elements is : "+iRet);
      

        
        


    }
}
