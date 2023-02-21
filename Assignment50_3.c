/*
   
    Input : 137
   Output :After Bits OFF Updated Number is : 201


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Toggle 7th Bits And Return Updated Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;
/*
    0000   0000  0000   0000   0000   0000    0000    0000

    0000   0000  0000   0000   0000   0000    0100    0000

      
*/
UINT Toggle7thBits(UINT No)
{
    UINT Mask = 0X00000040;
    UINT iResult = 0;
    iResult = No ^ Mask;

    return iResult;

    

}
int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = Toggle7thBits(Value);
    printf("After Bits OFF Updated Number is : %d\n",iRet);
   


    return 0;
}