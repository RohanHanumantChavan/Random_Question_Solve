/*

input :  iRow = 4;  iCol = 4;

Output : 
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1       5
  
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
    int n = 6;
    

   for(i = 1; i <= iRow; i++)
    {
      for(j = 1; j <= iCol; j++)
      {
        if((j == 1) || (j == iCol) || (i == j) || (i == 1))
        {
           System.out.print(j+" ");
        }
       else
        {
           System.out.print("  ");
        }
      
            
          
      }
      System.out.println();
      
     
    }
    


  }
}

class Assignment40_3
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


