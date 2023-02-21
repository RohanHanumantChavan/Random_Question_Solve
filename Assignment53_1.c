/*
   
Input : 5


Output :   *       *       *       *       *


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
  static int iCnt = 0;
  if(iCnt < 5)
  {
     printf("*\t");
     iCnt++;
     Display();

  }
}
int main()
{
  Display();

  return 0;
}