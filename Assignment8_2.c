//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 
// input : 6
// Output : six
//
// Input : 9
// Output: nine
//
//  Input : 12
//  Output : invalid number
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Single Digit number from user and print it into word
//                        
//    Input : Integer
//    Output : print in word
//    Author : Rohan Hanumant Chavan
//    Date : 07/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   void Display(int iNo)
   {
     switch(iNo)
     {
         case 0:
         printf("Zero");
         break;

         case 2:
         printf("Two");
         break;

         case 3:
         printf("Three");
         break;

         case 4:
         printf("Four");
         break;

         case 5:
         printf("Five");
         break;

         case 6:
         printf("Six");
         break;

         case 7:
         printf("Seven");
         break;

         case 8:
         printf("Eight");
         break;

         case 9:
         printf("Nine");
         break;

         default:
         printf("Invalid Number");
         break;
     }

   }
   int main()
  {
    int iValue = 0;

    printf("Enter the Single Digit \n");
    scanf("%d",&iValue);

    Display(iValue);

    
    return 0;
  }  
