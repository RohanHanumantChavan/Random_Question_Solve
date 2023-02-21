/*
   
Input : 
Please Enter Number
897
Please Enter Starting Point
9
Please Enter Ending Point
13

Output : After Range Toggle Updated Number is : 7297


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number & Range From User And Toggle That Range Bits
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

UINT ToggleBits(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF;
    UINT Mask2 = 0XFFFFFFFF;
    UINT iResult = 0;
    UINT iMask = 0;
    
    Mask1 = Mask1 << (Start -1);
    Mask2 = Mask2 >> (32 - End);

    iMask = Mask1 & Mask2;
    iResult = No ^ iMask;

    return iResult;

   

}
int main()
{
    UINT Value = 0;
    UINT i = 0;
    UINT j = 0;

    int iRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    printf("Please Enter Starting Point\n");
    scanf("%d",&i);
    
    printf("Please Enter Ending Point  \n");
    scanf("%d",&j);

    iRet = ToggleBits(Value,i,j);
    printf("After Range Toggle Updated Number is : %d\n",iRet);
   



    return 0;
}

/*
  1111   1111   1111   1111   1111   1111   1111   1111       Mask1
  
  1111   1111   1111   1111   1111   1111   1111   1111       Mask2


  1111   1111   1111   1111   1111   1111   0000   0000    Mask1 << Start -1

  0000   0000   0000   0000    0001  1111   1111   1111    Mask2 >> 32 - End   &&

  ---------------------------------------------------------------------------
  0000   0000   0000   0000    0001  1111   0000   0000     iMask
   
  1011   0010   0111   0000   0001   1001   0100   1110       NO     ^^^^

  -------------------------------------------------------------------
  1011   0010   0111   0000    0000  0110   0000   1110




*/