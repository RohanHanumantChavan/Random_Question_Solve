//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 
// input : 5
// Output : 5 10 15 20 25 30 35 40 45 50
//
// Input : -5
// Output: 5 10 15 20 25 30 35 40 45 50
//
//  Input : 2
//  Output : 2 4 6 8 10 12 14 16 18 20
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Number From User and Display Table in that Number
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 07/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   void DisplayTable(int iNo)
   {
    if(iNo < 0)
    {
      iNo = -iNo;
    }
      int iCnt = 0;
      printf(" Table of %d is : \n",iNo);
      for(iCnt = 1; iCnt <= 10; iCnt++)
      {
        printf("%d\t",iNo * iCnt);
      }
      
     }
   int main()
  {
    int iValue = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

     DisplayTable(iValue);
   

    
    return 0;
  }  