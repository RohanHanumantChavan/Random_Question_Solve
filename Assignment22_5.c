
/*
 input :  Row  5,  Col 5

 Output :
  
1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

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
  int A = 2;

 
 
        
   for(i = 1; i <= iRow; i++)
   { 
    
    for(j = 1; j <= iCol; j++)
     {  
       if((i == 1)||(i == iRow)||(j == 1)||(j == iCol))
       {
          printf("%d\t",j);
       }
       else
       {
          printf("*\t");
          
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
