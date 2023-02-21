/*
   
Input : 87983


Output :   87983 in Thise Digit Largest Number is : 9



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
int FindLargestNumber(int No)
{
    static int iMax = 0;
    int iDigit = 0;
    if(No != 0)
    {
        iDigit = No % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        No = No / 10;
        FindLargestNumber(No);

    }
    return iMax;
  
  
  
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Digit \n");
  scanf("%d",&iValue);

  iRet = FindLargestNumber(iValue);
  printf(" %d in Thise Digit Largest Number is : %d\n",iValue,iRet);

  return 0;
}