
/*
 input :  Row  4,  Col 4

 Output :
  
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Number from User and Display Pattern 
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   

   for(i = 1; i <= iRow; i++)
   { 
      char Ch1 = 'A';
      char Ch2 = 'a';
     for(j = 1; j <= iCol; Ch2++,Ch1++,j++)
     {
      if(( i % 2)== 0)
      {
         printf("%c\t",Ch2);
      }
      else
      {

         printf("%c\t",Ch1);
      }
      
      
      }
     printf("\n");
      
   }
   

}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter the Rows : \n");
  scanf("%d",&iValue1);

  printf("Enter the Columns : \n");
  scanf("%d",&iValue2);


  Display(iValue1,iValue2);
  return 0;
} 
