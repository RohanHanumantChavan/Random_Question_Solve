/*
   
Input : Accept Number From User 5


Output :   *       *       *       *       *


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Display Pattern using Recursive Apporch
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 18/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int No)
{
  static int iCnt = 1;
  if(iCnt <= No)
  {
     printf("*\t");
     iCnt++;
     Display(No);

  }
}
int main()
{
  int iValue = 0;

  printf("Please Enter Number \n");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}