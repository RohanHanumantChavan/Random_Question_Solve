/*

input : 2395
Output : 270

input : 9440
Output : 144

input : -1018
Output : 8

input : 922432
Output : 864
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Digit From user return Muliplication
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
     public int DigitsMultiplication(int iNo)
     {
        
        int iDigit = 0;
        int iMult = 1;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
     }

        

    
}

class Assignment33_4
{
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Digit ");
        iValue = sobj.nextInt();

       Digits dobj = new Digits();
       iRet = dobj.DigitsMultiplication(iValue);
       System.out.println(+iValue+" Multiplication of All Digit is : "+iRet);


    }
}
