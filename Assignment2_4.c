
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    follow the below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// local variable creation
// we can use storage class 
// use static memory allocation
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
//  problem statement : Accept two number from user and display first number in seconde number time 
//  input = 12  5
//  output = 12 12 12 12 12
//
//   input = 21 -3
//   output = 21 21 21
//
//    input = -2 0
//    output = 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Agorithm
START
Accept the number from user using scanf
pass the number to function
and print the first number in seconde number time
END
*/


#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application name : Accept the two number from and print first number in second number time 
//   Input: Integer
//   Output: Integer
//   Author: Rohan Hanumant Chavan
//   Date :  25/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Display(int iNo, int iFrequency)
{
    int Int = 0;
    for(Int = 1; Int <= iFrequency; Int++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
   printf("Enter the frequency number\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}



