/*

input :  8   9   7   6   4    2    4
Output : 
*       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *
*       *       *       *       *       *       *
*       *       *       *       *       *
*       *       *       *
*       *
*       *       *       *

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array From user and Display Pattern
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 7/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class ArrayX
{
    public void Display(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 1; j <= Arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }

}
class Assignment44_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter "+Arr.length+" Elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter "+(iCnt+1)+" nd Element ");
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX obj = new ArrayX();

        obj.Display(Arr);
    }
}