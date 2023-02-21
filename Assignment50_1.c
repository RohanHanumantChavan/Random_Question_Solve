/*
   
    Input : 79
   Output : After Bits OFF Updated Number is : 15


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Off 7th Bits And Return Updated Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 12/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;
/*
    0000   0000  0000   0000   0000   0000    0000    0000

    1111   1111  1111   1111   1111   1111    1011    1111    
*/
UINT OffBits(UINT No)
{
    UINT Mask = 0XFFFFFFBF;
    UINT iResult = 0;
    iResult = No & Mask;

    return iResult;

    

}
int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = OffBits(Value);
    printf("After Bits OFF Updated Number is : %d\n",iRet);
   


    return 0;
}