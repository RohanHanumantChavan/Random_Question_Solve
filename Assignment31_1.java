/*

input : Marvellous Multi OS

Output : Count of Capital Character is : 4
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String From User And Display Count Capital Character
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
    public int CountCapital(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++ )
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }

}

class Assignment31_1
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountCapital(str);
        System.out.println("Count of Capital Character is : "+iRet);




    }
}