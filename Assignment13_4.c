//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 2395
// Output : 1
//
// Input : 1018
// Output: 0
//
//  Input : 4521
//  Output :  2
//
//  Input : 9922
//  Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Digits from user and Count (3 & 7 Between) Number 
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 
 int MultDigit(int iNo)
 {
   int iDigit = 0;
   int iMult = 1;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    if(iDigit != 0)
    {
      iMult = iMult * iDigit;
    }
      
       iNo = iNo / 10;

   }
   return iMult;

 }
 int main()
 {
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = MultDigit(iValue);

   printf("Multiplication of Digit is : %d\n",iRet);
   
   
   return 0;
 }