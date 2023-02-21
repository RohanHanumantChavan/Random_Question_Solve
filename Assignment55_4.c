/*
   
Input : Accept Number From User 5


Output :  120


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
int Factorial(int No)
{
  static int iCnt = 1;
  static int iMult = 1;
  if(iCnt <= No)
  {
      iMult = iMult * iCnt;
      iCnt++;
      Factorial(No);
  }
  return iMult;
  
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Number \n");
  scanf("%d",&iValue);

  iRet = Factorial(iValue);
  printf("Factorial Of %d is : %d\n",iValue,iRet);

  return 0;
}