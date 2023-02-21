/*
   
Input : 87983


Output : 87983 in Thise Digit Smallest Number is : 3



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
int FindSmallestNumber(int No)
{
    static int iMin = 9;
    int iDigit = 0;
    if(No != 0)
    {
        iDigit = No % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        No = No / 10;
        FindSmallestNumber(No);

    }
    return iMin;
  
  
  
   
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please Enter Digit \n");
  scanf("%d",&iValue);

  iRet = FindSmallestNumber(iValue);
  printf(" %d in Thise Digit Smallest Number is : %d\n",iValue,iRet);

  return 0;
}