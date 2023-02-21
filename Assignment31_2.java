/*

input : Marvellous

Output : Count of Small Character is : 9
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String From User And Display Count Small Character
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
    public int CountSmall(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++ )
        {
            if((s.charAt(i) >= 'a') && (s.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }

}

class Assignment31_2
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountSmall(str);
        System.out.println("Count of Small Character is : "+iRet);




    }
}