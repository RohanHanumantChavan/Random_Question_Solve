/*

input :   89      687     56      549     87      9

Output : 17      21      11      18      15      9

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array From user and And Display Array Each Digit Sum
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 6/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class ArrayX
{
    
    public int Arr[];
    public int iSize;

    ArrayX(int i)
    {
        iSize = i;
        Arr = new int[iSize];
    }
    public void Accept()
    {
        System.out.println("Please Enter "+Arr.length+" Number");
        Scanner sobj = new Scanner(System.in);
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
             System.out.println("Enter Array "+(iCnt+1)+"nd Number : ");
             Arr[iCnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
        System.out.println("Elements of Array Are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
             System.out.print(Arr[iCnt]+"\t");
             
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

    public void DisplaySumArrayeachDigit()
    {
       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
         int iSum = 0;
         int iDigit = 0; 
        while( Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] =  Arr[iCnt] / 10;
           
        }
        System.out.print(iSum+"\t");
       
       
       }
   
    }
    
}
class Assignment43_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array : ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();


        obj.DisplaySumArrayeachDigit();
         
        
    }
}