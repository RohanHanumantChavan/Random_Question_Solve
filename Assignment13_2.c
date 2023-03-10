//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 2395
// Output : Odd 3
//
// Input : 1018
// Output: 2
//
//  Input : -1018
//  Output :  2
//
//  Input : 8462
//  Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Digits from user and Count Odd Number 
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 
 int CountOdd(int iNo)
 {
   int iDigit = 0;
   int iOddCount = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if((iDigit % 2)!= 0)
      {
          iOddCount++;
      }
     iNo = iNo / 10;

   }
   return iOddCount;

 }
 int main()
 {
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = CountOdd(iValue);

   printf(" %d Odd Number Count is : %d\n",iValue,iRet);
   
   
   return 0;
 }