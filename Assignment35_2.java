/*

input : str1  Marvellous Infosystem       str2  Marvellous Infosystem

Output :  equal True



  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Two String From user And Check is Equal 
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
    
   public boolean Checkstr(String src, String dest, int iNo)
   {
         int iCount = 0;
      for(int iCnt = 0; iCnt < src.length() && iCnt < dest.length(); iCnt++)
      {
        if(src.charAt(iCnt) == dest.charAt(iCnt))
        {
            if((src.charAt(iCnt) == ' ') && (dest.charAt(iCnt) == ' '))
            {
                iCount--;
            }
            iCount++;
        }

      }
      if(iCount == iNo)
      {
        return true;
      }
      else
      {
        return false;
      }
   }
}

class Assignment35_2
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
        bRet = obj.Checkstr(str1,str2, iValue);
        if(bRet == true)
        {
            System.out.println(str1+ " And "+str2+ " is " +iValue+ " Number Character is Smae " );
        }
        else
        {
             System.out.println(str1+ " And "+str2+ " is " +iValue+ " Number Character is Not Smae " );
        }
    


       
        
        
        
        


    }
}
