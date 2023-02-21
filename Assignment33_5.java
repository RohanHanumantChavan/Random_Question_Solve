/*

input : 2395
Output : -15  (2 - 17)

input : 8440
Output : 16   (16 - 0)

input : 1018
Output : 6   (8 - 2)
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Digit From user return Differences Summation of Even And Odd Digit
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 26/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class Digits
{
     public int DiffEvenAndOddSum(int iNo)
     {
        int iEvenCnt = 0;
        int iOddCnt = 0;
        int iDiff = 0;
        int iDigit = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iEvenCnt = iEvenCnt + iDigit;
            }
            else if((iDigit % 2) != 0)
            {
                iOddCnt = iOddCnt + iDigit;
            }
            iNo = iNo / 10;
        }
        iDiff = iEvenCnt - iOddCnt;
        return iDiff;
     }

        

    
}

class Assignment33_5
{
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Digit ");
        iValue = sobj.nextInt();

       Digits dobj = new Digits();
       iRet = dobj.DiffEvenAndOddSum(iValue);
       System.out.println(+iValue+" Differences Summation of Even And Odd Digit is : "+iRet);


    }
}
