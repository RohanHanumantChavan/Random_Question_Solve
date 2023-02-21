/*

input : MarvellouS

Output :  6  (8-2)
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String From User And Display Diffrences between Small And Capital Character Count
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 25/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class StringDemo
{
    public int CountDiff(String s)
    {
        int iCapitalCnt = 0;
        int iSmallCnt = 0;
        int iDiff = 0;
        for(int i = 0; i < s.length(); i++ )
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCapitalCnt++;
            }
            else if((s.charAt(i) >= 'a') && (s.charAt(i) <= 'z'))
            {
                iSmallCnt++;
            }
        }
        iDiff = iSmallCnt - iCapitalCnt;
        return iDiff;
    }

}

class Assignment31_3
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountDiff(str);
        System.out.println("Difference Count of Small & Capital Character is : "+iRet);




    }
}