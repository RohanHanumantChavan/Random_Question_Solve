/*

input :
Elements of First Array is :
2       9       6       5       2       3

input : 
Elements of  Second Array is :
45      6       12      18      23      4 



Output : 
Even Elements of First Array is :
2       6       2

Output :
Even Elements of Second Array is :
6       12      18      4
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Two Array From User And Display Even Elements of that Array
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 2/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class ArrayX
{
    public void Display(int Arr1[], int Arr2[])
    {
   System.out.println("Elements of First Array is : ");
    for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
    {
        System.out.print(Arr1[iCnt]+"\t");
    }

    System.out.println();
   


     System.out.println("Elements of  Second Array is : ");
    for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
    {
        System.out.print(Arr2[iCnt]+"\t");
    }

    System.out.println();
    System.out.println();


     System.out.println("Even Elements of First Array is : ");
     for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
    {
        if((Arr1[iCnt] % 2) == 0)
        {
            System.out.print(Arr1[iCnt]+"\t");
        }
    }

     System.out.println();

    

     System.out.println("Even Elements of Second Array is : ");
    for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
    {
        if((Arr2[iCnt] % 2) == 0)
        {
            System.out.print(Arr2[iCnt]+"\t");
        }
    }


    


    }

}
class Assignment41_2
{
    public static void main(String Arg[])  
    {
        int iCnt = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Size of First Array ");
        int iSize1 = sobj.nextInt();

        int First[] = new int[iSize1];

        System.out.println("Please Enter "+First.length+" Elements of First Array: ");
        for(iCnt = 0; iCnt < First.length; iCnt++)
        {
            System.out.println("Please Enter "+(iCnt+1)+" Element ");
            First[iCnt] = sobj.nextInt();
        }

         System.out.println();
         System.out.println();

         System.out.println("Please Enter Size of Second Array ");
        int iSize2 = sobj.nextInt();
        int Second[] = new int[iSize2];

        System.out.println("Please Enter "+Second.length+" Elements of Second Array : ");
        for(iCnt = 0; iCnt < Second.length; iCnt++)
        {
            System.out.println("Please Enter "+(iCnt+1)+" Element ");
            Second[iCnt] = sobj.nextInt();
        }
        System.out.println();


        ArrayX obj = new ArrayX();
        obj.Display(First,Second);


        

    }
}