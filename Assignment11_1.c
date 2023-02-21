//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 23  35
// Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//
// Input : 10
// Output:  10
//
//  Input : -10  2
//  Output :  -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
//
//  Input : 90 18
//  Output  Invalid Range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Range from user and display all numbers in between that range
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void RangeDisplay(int iNo1, int iNo2)
{
   if(iNo1 > iNo2)
   {
      printf("Invalid Range");
   }
   int iCnt = 0;
   for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
   {
      printf("%d\t",iCnt);
   }
}
int main()
{
   int iValue1 = 0, iValue2 = 0; 

   printf("Enter starting Number \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Number \n");
   scanf("%d",&iValue2);

   RangeDisplay(iValue1,iValue2);
   return 0;
}