//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 5        (8 - 15)  Even - Odd
// Output : -7
//
// Input : -5
// Output:  -7
//
//  Input : 10      (3840 - 945)
//  Output : 2895
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Number from user and find OddNumber and Even Number Difference
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 09/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   int EvenOrOddFactorialDifference(int iNo)
   {
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;
    int iSub = 0;
    if(iNo < 0)
    {
      iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if((iCnt % 2 )== 0)
         {
            iEvenFact = iEvenFact * iCnt;

         }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if((iCnt % 2 ) != 0)
         {
            iOddFact = iOddFact * iCnt;

         }
    }
    return iSub = iEvenFact - iOddFact;

      
   }
   int main()
  {
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

     iRet = EvenOrOddFactorialDifference(iValue);
     printf("Odd Factorial is : %d\n",iRet);
     return 0;
  }  
