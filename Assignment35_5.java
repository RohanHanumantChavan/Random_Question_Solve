/*

input : Marvellous Infosystem   And   Logic Building

Output : Marvellous Infosystem Logic



  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Two String From user And and Adding String
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
    
   public String Checkstr(String src, String dest, int iNo)
   {
        String s = ""; 
      for(int iCnt = 0; iCnt < iNo; iCnt++)
      {
        if(dest.charAt(iCnt) == ' ')
        {
          iNo = iNo+1;
        }
          s = s + dest.charAt(iCnt);
      }
      //s = src + s;
      return s;

      }
      
   }


class Assignment35_5
{
    public static void main(String Arg[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String ");
        String str1 = sobj.nextLine();

         System.out.println("Enter the Second String ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the Number ");
        int iValue = sobj.nextInt();

        StringDemo obj = new StringDemo();
        String string = obj.Checkstr(str1,str2, iValue);
        System.out.println("New Add String is :  "+str1+" "+string);
        
    


       
        
        
        
        


    }
}
