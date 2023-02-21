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
class StringDemo
{
    public boolean CheckRotation(String str1, String str2)
    {
        String temp = str1 + str1;
        if((str1.length() == str2.length())   && (temp.contains(str2)))
        {
            return true;
        }
        else
        {
            return false;
        }
         

        
    }
}
class Assignment45_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter First String ");
         String s1 = sobj.nextLine();
        
        System.out.println("Please Enter Second String ");
         String s2 = sobj.nextLine();

        

        
        StringDemo obj = new StringDemo();

          boolean bRet = obj.CheckRotation(s1,s2);
          if(bRet == true)
         {
            System.out.println("Two Strings Are Rotation of Each Other");
        }
        else
        {
              System.out.println("Two Strings Are Not Rotation of Each Other");
        }
    }
}