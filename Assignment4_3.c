
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    follow the below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// local variable creation
// we can use storage class 
// use static memory allocation
// use if  condition
// use for loop
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////7
// step1: understand the problem stement
// step2: write the algorithm
// step3: deside the programming languge(c,c++,java)
// step4: write the program
// step5: test the program
//////////////////////////////////////////////////////////////////////////////77

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  problem statement : Accept the number from user and display its no factor
//  input = 12
//  output = 5 7 8 9 10 11
//
//   input = 10
//   output = 3 4 6 7 8 9
//
//    input = 13
//    output = 2 3 4 5 6 7 8 9 10 11 12
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Agorithm
START
Accept the number from user using scanf
pass the number to funtion call
check the that number non factors 
and print the non factor number
END
*/


#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application name : Accept the number from user and display its non factor
//   Input: Integer
//   Output: Integer
//   Author: Rohan Hanumant Chavan
//   Date :  26/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 
 void NonFacor(int iNo)
 {
    int iCnt = 0;
    printf("NonFacor is : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!= 0)
        {
            printf("%d\t",iCnt);
        }
    }
 }
 int main()
 {
    int iValue = 0;
     
    printf("Enter the number\n");
    scanf("%d",&iValue);

    NonFacor(iValue); 
    return 0;
 }