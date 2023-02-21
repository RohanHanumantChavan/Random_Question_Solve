//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 23  30
// Output : 212
//
// Input : 10   18
// Output:  126
//
//  Input : -10  2
//  Output :  Invalid Range
//
//  Input : 90 18
//  Output  Invalid Range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Range from user and display Summination of Number Between  that Range 
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int RangeSum(int iNo1, int iNo2)
{
   if(iNo1 > iNo2)
   {
      printf("Invalid Range");
   }

   int iCnt = 0;
   int iSum = 0;
   for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
   {
      iSum = iSum + iCnt;
   }
   return iSum;
}
int main()
{
   int iValue1 = 0, iValue2 = 0; 
   int iRet = 0;

   printf("Enter starting Number \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Number \n");
   scanf("%d",&iValue2);

   iRet = RangeSum(iValue1,iValue2);

   if(iRet < 0)
   {
      printf("Invalid Range\n");
   }
   else
  { 
      printf("Summination of Range is : %d\n",iRet);
  }
   return 0;
}