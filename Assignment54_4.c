/*
   
Input : Accept Number From User 6


Output :   A       B       C       D       E       F

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
   static char Ch = 'A';
  if(iCnt <= No)
  {
     printf("%c\t",Ch);
     iCnt++;
     Ch++;
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