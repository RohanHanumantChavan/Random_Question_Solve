/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Follow the Below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Local variable creation
//   use storage class
//   use if else condition
//   use  typedef
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step1: understand the problem statement
// step2: Write the Agorithem
// step3: Decide the programming languge
// step4: Write the Program 
// step5: test the Program
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// problem statement : Accept the Two number from user and check that number is equals equals or not
// input : 10,10
// Output : number is equals
//
// Input : 10,12
// Output: Number is not equals
//
//  Input : 10 -10
//  Output : number is not equals
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
START
Accept two number from user using scanf
pass that number to function call
check that number two number is equals equals(==)
if number is equals then print number is equals
and if number is not equals then print number is not equals
END

 */

  #include<stdio.h>
  #include<stdbool.h>
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Application name: Accept the Two number from user and check that number is equals equals
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 04/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0
 BOOL CheckEquals(int iNo1, int iNo2)
 {
     if(iNo1 == iNo2)
     {
         return TRUE;
     }
     else
     {
        return FALSE;
     }
 }


 int main()
 {
  int iValue1 = 0;
  int iValue2 = 0;

  BOOL bRet = FALSE;

  printf("Enter First Number\n");
  scanf("%d",&iValue1);
  printf("Enter Second Number\n");
  scanf("%d",&iValue2);

  bRet =CheckEquals(iValue1,iValue2);
  if(bRet == TRUE)
  {
    printf("%d\t%d \nNumber is Equals",iValue1,iValue2);
  }
  else
  {
    printf("%d\t%d \n Number Is Not Equals",iValue1,iValue2);
  }
 }