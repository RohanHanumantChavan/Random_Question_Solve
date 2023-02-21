
/*
 input :  Row  3,  Col 4

 Output :
  
1       2       3       4
5       6       7       8
9       10      11      12

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
  int iCnt = 1;
 
        
   for(i = 1; i <= iRow; i++)
   { 
     
      
     for(j = 1; j <= iCol; j++,iCnt++)
     {    
         if(iCnt > 9)
         {
            iCnt = 1;

         }
         if(iCnt <= 9)
        {
          printf("%d\t",iCnt);
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
