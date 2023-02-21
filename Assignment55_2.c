/*
   
Input : Accept Number From User 5


Output :  5       *       4       *       3       *       2       *       1       *


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Display Pattern using Recursive Apporch
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SummationOfDitis(int No)
{
   int Digit = 0;
   static int Sum = 0;
   if(No != 0)
   {
       Digit = No % 10;
       Sum = Sum + Digit;
       No = No / 10;
       SummationOfDitis(No);

   }
   return Sum;
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Digit \n");
  scanf("%d",&iValue);

  iRet = SummationOfDitis(iValue);
  printf("Addition Of Digit All Number is : %d\n",iRet);

  return 0;
}