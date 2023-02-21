
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    follow the below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// local variable creation
// we can use storage class 
// use static memory allocation
// use boolean keyword
// use if else condition
// use typedef keyword
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
//  problem statement : Accept  numberfrom user and check whether number is even or odd
//  input = 12  
//  output = number is even
//
//   input = 15
//   output = number is odd
//
//    input = 20
//    output = number is even
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Agorithm
START
Accept the number from user using scanf
pass the number to CheckWhether 
and check the number is even or odd
END
*/


#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application name : Accept the number from user and check the number even or odd
//   Input: Integer
//   Output: even or odd
//   Author: Rohan Hanumant Chavan
//   Date :  25/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  #define TRUE 1
  #define FALSE 0
  typedef int BOOL;

 BOOL CheckEven(int iNo)
{
    if((iNo % 2)== 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;
    

    printf("Enter the number\n");
    scanf("%d",&iValue);
  

    bRet = CheckEven(iValue);
    if(bRet == 1)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}



