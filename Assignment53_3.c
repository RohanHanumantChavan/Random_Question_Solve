/*
   
Input : 5


Output :   5       4       3       2       1


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept And Display Pattern using Recursive Apporch
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 18/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
  static int iCnt = 5;
  if(iCnt >= 1)
  {
    
     printf("%d\t",iCnt);
     iCnt--;
    Display();
     
    
  }
}
int main()
{
  Display();
  return 0;
}