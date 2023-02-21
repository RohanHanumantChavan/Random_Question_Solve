/*
   
Input : Accept Number From User 523


Output :  Product Of 523 Thise Number is : 30



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Write Program in Recursive Approach
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int returnProduct(int No)
{
  
  static int iMult = 1;
  int Digit = 0;
  if(No != 0)
  {
      Digit = No % 10;
      iMult = iMult * Digit;
      No = No / 10;
      returnProduct(No);
  }
  return iMult;
  
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Digit \n");
  scanf("%d",&iValue);

  iRet = returnProduct(iValue);
  printf("Product Of %d Thise Number is : %d\n",iValue,iRet);

  return 0;
}