/*

input :  iRow = 4;  iCol = 4;

Output : 
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d


  
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
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
      for(j = 1; j <= iCol; j++)
      {
          if((i % 2)== 0)
          {
            System.out.print(ch+"\t");
          }
          else
          {
            System.out.print(Ch+"\t");
          }
          Ch++;
          ch++;
      }
      System.out.println();
      Ch = 'A';
      ch = 'a';
    }
    


  }
}

class Assignment36_2
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


