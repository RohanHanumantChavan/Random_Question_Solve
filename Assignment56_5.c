/*
   
Input : 523


Output : 523 in Thise Digit After Reverse Digit is : 325


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
int ReverseNumber(int No)
{
    static int iRev = 0;
    int iDigit = 0;
    if(No != 0)
    {
        iDigit = No % 10;
        iRev = (iRev * 10) + iDigit;
        No = No / 10;
        ReverseNumber(No);

    }
    return iRev;
  
  
  
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Digit \n");
  scanf("%d",&iValue);

  iRet = ReverseNumber(iValue);
  printf(" %d in Thise Digit After Reverse Digit is : %d\n",iValue,iRet);

  return 0;
}