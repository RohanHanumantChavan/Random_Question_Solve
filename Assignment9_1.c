//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 5
// Output : *      *      *      *      *      #      #      #      #      #
//
// Input : -5
// Output:  *      *      *      *      *      #      #      #      #      #
//
//  Input : 6
//  Output : *      *      *      *      *     *      #      #      #      #      #      #
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Number From User and Display Pattern(* #)
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 09/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   void DisplayPattern(int iNo)
   {
    if(iNo < 0)
    {
      iNo = -iNo;
    }
      int iCnt = 0;
     for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        printf("*\t");
      }
      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        printf("#\t");
      }
      printf("\n");
      
     }
   int main()
  {
    int iValue = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

     DisplayPattern(iValue);
   

    
    return 0;
  }  