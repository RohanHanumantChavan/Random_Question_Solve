/*

input :  iRow = 3;  iCol = 5;

Output : 
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Number of Row And Number Colums And Display Pattern
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 27/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Pattern
{
  public void DisplayPattern(int iRow, int iCol)
  {
    int i = 0, j = 0;
    char Ch = 'A';

    for(i = 1; i <= iRow; i++,Ch++)
    {
      for(j = 1; j <= iCol; j++)
      {
         
            System.out.print(Ch+"\t");
          
      }
      System.out.println();
      
     
    }
    


  }
}

class Assignment36_3
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


