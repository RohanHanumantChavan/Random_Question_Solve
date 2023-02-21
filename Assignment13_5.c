//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 2395
// Output : -15
//
// Input : 1018
// Output: 6
//
//  Input : 8440
//  Output :  16
//
//  Input : 5733
//  Output : -18
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Digits from user and And Summination of Even or Odd And Display Difference That Summination  
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 
 int CountDiff(int iNo)
 {
   int iDigit = 0;
   int iEven = 0, iOdd = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
    iDigit = iNo % 10;

    if((iDigit % 2)== 0)
    {
      iEven = iEven + iDigit;
    }
    else
    {
      iOdd = iOdd + iDigit;
    }
      iNo = iNo / 10;

   }
   return iEven - iOdd;

 }
 int main()
 {
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = CountDiff(iValue);

   printf("Summination Differen of Even or Odd Digit is : %d\n",iRet);
   
   
   return 0;
 }