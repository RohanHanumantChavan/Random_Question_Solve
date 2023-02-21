/*
   
    Input : 131088
   Output : 131088 in This Number 5th  & 18th Bits is ON



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Check is 5th  & 18th Bits ON Or OFF
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;
BOOL CheckBits(UINT No)
{
    UINT Mask = 0X00020010;
    UINT iResult = 0;
    iResult = No & Mask;

    if(iResult == Mask)
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
    UINT Value = 0;
    BOOL bRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    bRet = CheckBits(Value);
    if(bRet == 1)
    {
        printf("  %d in This Number 5th  & 18th Bits is ON  \n",Value);
    }
    else
    {
         printf("  %d in This Number 5th  & 18th Bits is OFF  \n",Value);
    }



    return 0;
}