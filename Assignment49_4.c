/*
   
    Input : 448
   Output : 448 in This Number 7th 8th 21th & 9th Bits is ON


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Check is 7th 8th 21th & 9th Bits ON Or OFF
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
    UINT Mask = 0X000001C0;
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
        printf("  %d in This Number 7th 8th 21th & 9th Bits is ON  \n",Value);
    }
    else
    {
         printf("  %d in This Number 7th 8th 21th & 9th Bits is OFF  \n",Value);
    }



    return 0;
}