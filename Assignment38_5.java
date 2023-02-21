/*

input :  Hello

Output : 
H
H       e
H       e       l
H       e       l       l
H       e       l       l       o
H       e       l       l
H       e       l
H       e
H

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

      for(j = 0; j <= i; j++)
      {

         
         System.out.print(Arr[j]+"\t");
         
           
      }
      
      
      System.out.println();
      
     
    }
    for(i = 0; i < Arr.length; i++)
    {

      for(j = 0; j < Arr.length-i-1; j++)
      {

         
         System.out.print(Arr[j]+"\t");
         
           
      }
      
      
      System.out.println();
      
     
    }
    

    


  }
}

class Assignment38_5
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


