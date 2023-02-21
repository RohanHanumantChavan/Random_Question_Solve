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
//   Application Name : Write Program java Program Accept Array and Copy Elements of Another Array
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

    public boolean CheckPallindrome()
    {
       

        int iDigit = 0;
        int iRev = 0;
        boolean bFlag = true;

            for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           int iNo = Arr[iCnt]; 
        while( Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iRev = (iRev * 10) + iDigit;
            Arr[iCnt] =  Arr[iCnt] / 10;

       


        }
        if (iNo != iRev)
        {
            bFlag = false;
            break;
        }
        

        }
        return bFlag;
       
        
        
        
        
       

    }
    
}
class Assignment42_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array : ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();


        boolean bRet = obj.CheckPallindrome();
        if(bRet == false)
        {
            System.out.println("Array is not Pallindrome : ");
        }
        else 
        {
            System.out.println("Array is Pallindrome : ");
        }
        
    }
}