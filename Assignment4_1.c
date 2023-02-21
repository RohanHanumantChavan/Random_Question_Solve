
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    follow the below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// local variable creation
// we can use storage class 
// use static memory allocation
// use if else condition
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
//  problem statement : Accept number from user and display its multiplication of factor
//  input = 12
//  output = 144
//
//   input = 10
//   output = 10
//
//    input = 13
//    output = 1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Agorithm
START
Accept the number from user using scanf
pass the number to funtion call
check the that number factor 
and perform the multiplication of factor 
print the muliplication of factor 
END
*/


#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application name : Accept the number from user and display its multiplication of factors 
//   Input: Integer
//   Output: Integer
//   Author: Rohan Hanumant Chavan
//   Date :  26/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 
 int MultFact(int iNo)
 {
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
 }
 int main()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Factor multiplication is : %d\n",iRet);
    return 0;
 }