
/*
 input :  Row  5,  Col 5

 Output :
  
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
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
  char Ch = 'a';

 
 
        
   for(i = 1; i <= iRow; i++)
   { 
    if(Ch > 'e')
    {
      Ch = 'a';
    }
    
   
    
      
     for(j = 1; j <= iCol; j++)
     {    
         if(i % 2 != 0)
         {
          printf("%c\t",Ch);
          Ch++;
          
         }
         else
         {
            printf("%d\t",j);
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
