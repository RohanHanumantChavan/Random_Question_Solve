//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  5
// Output :  5       #       4       #       3       #       2       #       1       #
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Number from User and Display Pattern 
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }
   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
       printf("%d\t#\t",iCnt);
   }
   printf("\n");

}
int main()
{
  int iValue = 0;

  printf("Enter the Number : \n");
  scanf("%d",&iValue);

  Display(iValue);
  return 0;
} 
