/*

input :  Hello  & *

Output : 
H       e       l       l       o
H       e       l       l       *
H       e       l       *       *
H       e       *       *       *
H       *       *       *       *
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String from user And Display Pattern
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 28/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Pattern
{
  public void DisplayPattern(String str)
  {
    char Arr[] = str.toCharArray();
    int i = 0, j = 0;

   for(i = 0; i < Arr.length; i++)
    {

      for(j = 0; j < Arr.length; j++)
      {

         if(j < Arr.length-i )
         {
              System.out.print(Arr[j]+"\t");
              
         }
         else
         {
            System.out.print("*\t");
            
         }
         
           
      }
      
      
      System.out.println();
      
     
    }
    


  }
}

class Assignment39_2
{
  public static void main(String Arg[])
  {
    
       Scanner sobj = new Scanner(System.in);

       System.out.println("Please Enter String : ");
       String s = sobj.nextLine();

        
       Pattern pobj = new Pattern();
       pobj.DisplayPattern(s);


  }
}


