/*
   
    Input : 
Please Enter Number
10
Please Enter Position1
3
Please Enter Position2
7

Output : TRUE

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Check is Bits
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

BOOL CheckBits(UINT No, int Pos1, int Pos2)
{
    UINT Mask1 = 0X00000001;
    UINT Mask2 = 0X00000001;
    UINT iResult = 0;
    UINT iMask = 0;
    if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) ||(Pos2 > 32))
    {
        printf("Invalid Position it Should be Between 1 to 32  \n");
        return false;
    }
    Mask1 = Mask1 << (Pos1 -1);
    Mask2 = Mask2 << (Pos2 -1);

    iMask = Mask1 | Mask2;
    iResult = No & iMask;

    if(iResult != iMask)
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
    int Position1 = 0;
    int Position2 = 0;

    BOOL bRet = false;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    printf("Please Enter Position1  \n");
    scanf("%d",&Position1);
    
    printf("Please Enter Position2  \n");
    scanf("%d",&Position2);

    bRet = CheckBits(Value,Position1,Position2);
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