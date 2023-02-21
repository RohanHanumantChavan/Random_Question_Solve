//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 2395
// Output : 0
//
// Input : 1018
// Output: 0
//
//  Input : 9440
//  Output :  2
//
//  Input : 922432
//  Output : 1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Digits from user and Checked Four Number Count
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 
 int CountFour(int iNo)
 {
   int iDigit = 0;
   int iFrequency = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 4)
      {
          iFrequency++;
      }
     iNo = iNo / 10;

   }
   return iFrequency;

 }
 int main()
 {
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = CountFour(iValue);

   printf("Count Frequency 4 Number is : %d\n",iRet);
   
   
   return 0;
 }