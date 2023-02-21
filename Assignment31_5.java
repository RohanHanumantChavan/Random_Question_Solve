/*

input : MarvellouS

Output : SuollevraM
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String From User And Display Reverse format
//                        
//    Input : String
//    Output : String
//    Author : Rohan Hanumant Chavan
//    Date : 25/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class StringDemo
{
    public void ReverseString(String s)
    {
       
        
       
        for(int i = s.length()-1; i >= 0; i--)
        {
           System.out.print(s.charAt(i));
        }
        
        
    }

}

class Assignment31_5
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        obj.ReverseString(str);
        




    }
}