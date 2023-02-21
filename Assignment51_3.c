/*
   
    Input : 
Please Enter Number
10
Enter Position
3


Output : After Bit ON Updated Number is 14


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept one Number And Position From User And ON That Position bits Return Updated Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;
UINT ONBits(UINT No, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    iMask = iMask << (iPos - 1);
    iResult = No | iMask;
    return iResult;


}
int main()
{
    UINT Value = 0;
    int Pos = 0;
    UINT iRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);

    printf("Enter Position \n");
    scanf("%d",&Pos);

    iRet = ONBits(Value,Pos);
    printf("After Bit ON Updated Number is %d\n",iRet);
   



    

    return 0;
}
