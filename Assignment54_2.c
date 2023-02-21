/*
   
Input : Accept Number From User 5


Output :   1       2       3       4       5


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
     printf("%d\t",iCnt);
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