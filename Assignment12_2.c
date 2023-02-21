//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 2395
// Output : There is no Zero
//
// Input : 1018
// Output:  it Contains Zero
//
//  Input : 9000
//  Output :  it contains Zero
//
//  Input : 10687
//  Output : it contains Zero
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Digits from user and Checked Zero in that Digits
//                        
//    Input : Integer
//    Output : Zero or not
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;
 BOOL CheckedZero(int iNo)
 {
   int iDigit = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 0)
      {
         return TRUE;
      }
     
       iNo = iNo / 10;

   }
 }
 int main()
 {
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter the Number \n");
   scanf("%d",&iValue);

   bRet = CheckedZero(iValue);
   if(bRet == TRUE)
   {
     
      
        printf("it Contains Zero");
   }
   else
   {
      
       printf("There is no Zero");

   }

   
   return 0;
 }