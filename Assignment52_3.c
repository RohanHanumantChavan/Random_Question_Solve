/*
   
    Input : 2304
   Output : TRUE


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name :  Write C Program Accept Number From User And Check is Bits
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 14/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
typedef int BOOL;

BOOL CheckBits(UINT No)
{
    UINT Mask = 0X00000900;
    UINT iResult = 0;
    iResult = No & Mask;

    if(iResult != Mask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    UINT Value = 0;
    BOOL bRet = false;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    bRet = CheckBits(Value);
    if(bRet == true)
    {
        printf("TRUE \n");   // bits is OFF
    }
    else
    {
         printf("FALSE \n");   // Bits is ON
    }


    return 0;
}