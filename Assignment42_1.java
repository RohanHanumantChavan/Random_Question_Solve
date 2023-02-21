/*

input :
Elements of First Array is :
2       9       7       5       2       3

input : 
Elements of  Second Array is :
9       3       5       5



Output : 6




  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Two Array From User And Display Difference of Two Array  Addition
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
    int iSum1 = 0;
    int iSum2 = 0;
    
    public int Diff(int Arr1[], int Arr2[])
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


     
     for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
    {
        iSum1 = iSum1 + Arr1[iCnt];
    }

     System.out.println();

    

    
    for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
    {
        iSum2 = iSum2 + Arr2[iCnt];
    }


    int iDiff =  iSum1 - iSum2;
    return iDiff;

    }
    

}
class Assignment42_1
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
        int iRet = obj.Diff(First,Second);
        System.out.println("Difference Between Two Array Summation is "+iRet);


        

    }
}