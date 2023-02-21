/*

input :
Elements of First Array is :
1       2       3       4       5


Output : 
Array Copy Another Array And Display Reverse :
5       4       3       2       1
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array Return Reverse Array
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
    public void Display(int Arr[])
    {
   System.out.println("Elements of First Array is : ");
    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        System.out.print(Arr[iCnt]+"\t");
    }

   
    System.out.println();
    
}
public int[] CopyArrayRevese(int Arr[])
{
    int A = Arr.length;
    
    int iComb = A;
    int C[] = new int[iComb];
   
    int iStart = 0;
    int iEnd = Arr.length-1;
    int iTemp = 0;
    
for(int iCnt = 0; iCnt < Arr.length; iCnt++)
{
    while(iStart < iEnd)
    {
        iTemp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = iTemp;
        iStart++;
        iEnd--;

    
    }
    
    
    
  
}


for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        C[iCnt] = Arr[iCnt];
    }
    

   
 
return C;

    
}


}
class Assignment42_3
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
         
         


        ArrayX obj = new ArrayX();
        obj.Display(First);
        int iRev[] = obj.CopyArrayRevese(First);

    System.out.println("Array Copy Another Array And Display Reverse : ");
    for( iCnt = 0; iCnt < iRev.length; iCnt++)
    {
        System.out.print(iRev[iCnt]+"\t");
    }




        

    }
}