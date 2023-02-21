//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 23  35
// Output : 24      26      28      30      32      34
//
// Input : 10   18
// Output:  10    12    14    16     18
//
//  Input : -10  2
//  Output :  -10    -8     -6      -4     -2     0      2
//
//  Input : 90 18
//  Output  Invalid Range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Range from user and display all Even numbers in Between  that Range 
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void RangeDisplayEven(int iNo1, int iNo2)
{
   if(iNo1 > iNo2)
   {
      printf("Invalid Range");
   }
   int iCnt = 0;
   printf("all Even Number Between Range :\n");
   for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
   {
      if((iCnt % 2)== 0)
      {
      printf("%d\t",iCnt);

      }
   }
}
int main()
{
   int iValue1 = 0, iValue2 = 0; 

   printf("Enter starting Number \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Number \n");
   scanf("%d",&iValue2);

   RangeDisplayEven(iValue1,iValue2);
   return 0;
}