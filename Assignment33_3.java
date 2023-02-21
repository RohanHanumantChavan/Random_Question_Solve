/*

input : 2395
Output : 1

input : 4521
Output : 2

input : -1018
Output : 0
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Digit From user return the Count of Rnge Between Number
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
     public int CountRange(int iNo)
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
            if((iDigit > 3) && (iDigit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
     }

        

    
}

class Assignment33_3
{
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Digit ");
        iValue = sobj.nextInt();

       Digits dobj = new Digits();
       iRet = dobj.CountRange(iValue);
       System.out.println(+iValue+" Count of Range Between Number is : "+iRet);


    }
}
