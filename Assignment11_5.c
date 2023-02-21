//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 23  35
// Output : 35      34      33      32      31      30      29      28      27      26      25      24      23
//
// Input : 10  18
// Output:  18      17      16      15      14      13      12      11      10
//
//  Input : -10  2
//  Output :  2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10
//
//  Input : 90 18
//  Output  Invalid Range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Range from user and display all numbers in Reverse between that range
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void RangeDisplayReverse(int iNo1, int iNo2)
{
   if(iNo1 > iNo2)
   {
      printf("Invalid Range");
   }
   int iCnt = 0;
   for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
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

   RangeDisplayReverse(iValue1,iValue2);
   return 0;
}