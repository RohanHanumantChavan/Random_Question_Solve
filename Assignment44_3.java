/*

input :  b  N  e  B  R  b  A  I  O  G  i      Upper = 7;  Lower = 4;   

Output : Differences Of Upper And Lower Character is : 3

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept character Array from User And return Differences of Upper And Lower Character
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 6/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class ArrayX
{
    public int DiffOfUpperAndLowerCharacter(char Arr[])
    {
        int i = 0;
        int iUpperCnt = 0;
         int iLowerCnt = 0;
        for(i = 0; i < Arr.length; i++)
        {
          if(Character.isUpperCase(Arr[i]))
          {
              iUpperCnt++;
          }
          else if(Character.isLowerCase(Arr[i]))
          {
              iLowerCnt++;
          }
           
        }
        return(iUpperCnt - iLowerCnt);
        
        
    }
    
   
}

class Assignment44_3
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the Character of Array : ");
        char Arr[] = sobj.next().toCharArray();
       

        ArrayX obj = new ArrayX();
     iRet = obj.DiffOfUpperAndLowerCharacter(Arr);
     System.out.println("Differences Of Upper And Lower Character is : "+iRet);
       

        

       
         
        
    }
}