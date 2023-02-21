/*
   
    Input : 
Please Enter Number
45
Enter Position
6

   Output : Bit At The Position 6 is ON

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept one Number And Position From User And Check That Position Bits is OFF Or ON
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;
BOOL CheckBitsAtPos(UINT No, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid Position it Should Between 1 to 32  \n");
        return 0;
    }

    iMask = iMask << (iPos - 1);
    iResult = No & iMask;

    if(iResult == iMask)
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
    int Pos = 0;
    BOOL bRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);

    printf("Enter Position \n");
    scanf("%d",&Pos);

    bRet = CheckBitsAtPos(Value,Pos);
    if(bRet == 1)
    {
        printf("Bit At The Position %d is ON \n",Pos);
    }
    else
    {
         printf("Bit At The Position %d is OFF \n",Pos);
    }



    

    return 0;
}
