/*

input :  iRow = 3;  iCol = 5;

Output : 
5       4       3       2       1
5       4       3       2       1
5       4       3       2       1
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Number of Row And Number Colums And Display Pattern
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
  public void DisplayPattern(int iRow, int iCol)
  {
    int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
    {
      for(j = iCol; j >= 1; j--)
      {
         
            System.out.print(j+"\t");
            
          
      }
      System.out.println();
      
     
    }
    


  }
}

class Assignment37_3
{
  public static void main(String Arg[])
  {
    int iNo1 = 0;
    int iNo2 = 0;
       Scanner sobj = new Scanner(System.in);

       System.out.println("Please Enter Number of Rows : ");
       iNo1 = sobj.nextInt();

        System.out.println("Please Enter Number of Colums : ");
       iNo2 = sobj.nextInt();

       Pattern pobj = new Pattern();
       pobj.DisplayPattern(iNo1, iNo2);


  }
}


