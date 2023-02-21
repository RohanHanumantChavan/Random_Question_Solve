/*

input : 2395
Output : 1

input : 8462
Output : 4

input : -1018
Output : 2
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Digit From user return the Count of even Number
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
     public int CountEvenNumber(int iNo)
     {
        int iCnt = 0;
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
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
     }

        

    
}

class Assignment33_1
{
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Digit ");
        iValue = sobj.nextInt();

       Digits dobj = new Digits();
       iRet = dobj.CountEvenNumber(iValue);
       System.out.println(+iValue+" Count of Even Number is : "+iRet);


    }
}
