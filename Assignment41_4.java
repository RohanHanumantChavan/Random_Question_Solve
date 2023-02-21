/*

input :
Elements of First Array is :
12      57      28      3
input : 
Elements of  Second Array is :
99      23      54      58      6       67


Output : 
Elements of  Two Combination Array is :
12      57      28      3       99      23      54      58      6       67
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Two Array From User And Display Combination of Array
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
    


    


    }
public void ConcateArray(int Arr1[], int Arr2[])
{
    int A1 = Arr1.length;
    int A2 = Arr2.length;
    int iComb = A1 + A2;
    int C[] = new int[iComb];

   
     for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
    {
        C[iCnt] = Arr1[iCnt];
    }

    for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
    {
        C[A1 + iCnt] = Arr2[iCnt];
    }

    System.out.println();
   
 System.out.println("Elements of  Two Combination Array is : ");
    for(int iCnt = 0; iCnt < iComb; iCnt++)
    {
        System.out.print(C[iCnt]+"\t");
    }



    
}

}
class Assignment41_4
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
        obj.ConcateArray(First,Second);



        

    }
}