/*

input : aCBdef

Output :  FEDbcA



  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String from user and Display change case and Reverse string
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
    
   public String StrRevTog(String s1)
   {
    String s2 = "";
    char Arr[] = s1.toCharArray();
    
     for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
      
        
        if(Character.isLowerCase(Arr[iCnt]))
          {
            
             Arr[iCnt] = Character.toUpperCase(Arr[iCnt]);
            
          }
          else if(Character.isUpperCase(Arr[iCnt]))
          {
             
             Arr[iCnt] = Character.toLowerCase(Arr[iCnt]);
              
          }
          
          s2 = Arr[iCnt] + s2;
          
          

        
          
        }
        
        
          return s2;

        

      
      
      
   }
}

class Assignment35_3
{
    public static void main(String Arg[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String ");
        String str = sobj.nextLine();

         

        StringDemo obj = new StringDemo();
        String string = obj.StrRevTog(str);
        System.out.println("Reverse And Change Case String is : "+string);
        


       
        
        
        
        


    }
}
