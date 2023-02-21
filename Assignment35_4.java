/*

input : 1abccBA1

Output :  String is Pallindrome



  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String from user and Check is Pallindrome or Not
//                        
//    Input : string
//    Output : string
//    Author : Rohan Hanumant Chavan
//    Date : 27/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class StringDemo
{
    
   public boolean StrPallindrome(String s)
   {
    String Reverse = "";
    char Arr[] = s.toCharArray();
    
     for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
      
        
       Reverse =  Arr[iCnt] + Reverse;
          
        }
        if(s.toLowerCase().equals(Reverse.toLowerCase()))
        {
          return true;
        }
        else
        {
          return false;
        }
        
          

        

      
      
      
   }
}

class Assignment35_4
{
    public static void main(String Arg[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String ");
        String str = sobj.nextLine();

         

        StringDemo obj = new StringDemo();
        bRet = obj.StrPallindrome(str);
        if(bRet == true)
        {
          System.out.println("String is Pallindrome ");
        }
        else
        {
          System.out.println("String is Not Pallindrome ");
        }
        


       
        
        
        
        


    }
}
