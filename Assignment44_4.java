/*

input :  b  N  e  B  R  b  A  i  G  i  B

Output : 4

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept character Array from User And Display Count of Vowel Character
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
    public int FindCharacter(char Arr[], char Ch)
    {
        int i = 0;
        int iCnt = 0;
        int iCount = 0;
         
        for(i = 0; i < Arr.length; i++)
        {
          if(Character.isUpperCase(Arr[i]))
          {
            if(Character.isLowerCase(Ch))
            {
                Ch = Character.toUpperCase(Ch);
            }
              if(Arr[i] == Ch)
              {
                  iCnt++;
              }
          }
          else if(Character.isLowerCase(Arr[i]))
          {
            if(Character.isUpperCase(Ch))
            {
                Ch = Character.toLowerCase(Ch);
            }
             if(Arr[i] == Ch)
              {
                  iCnt++;
              }
          }
           
        }
        return iCnt;
        
        
    }
    
   
}

class Assignment44_4
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the Character of Array : ");
        char Arr[] = sobj.next().toCharArray();

        System.out.println("Enter the Single Character : ");
        char c = sobj.next().charAt(0);
       

        ArrayX obj = new ArrayX();
     iRet = obj.FindCharacter(Arr,c);
     System.out.println("Character is Occurances in Array is : "+iRet);
       

        

       
         
        
    }
}