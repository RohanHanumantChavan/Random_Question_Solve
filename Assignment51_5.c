/*
   
    Input : 
Please Enter Number
10
Enter Position
3


Output : After Bit Toggle Updated Number is 14


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept one Number And Position From User And Toggle That Position bits Return Updated Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleNibble(UINT No)
{
    UINT iMask = 0XF000000F;
    UINT iResult = 0;
    iResult = No ^ iMask;
    return iResult;


}
int main()
{
    UINT Value = 0;
    int Pos = 0;
    UINT iRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);


    iRet = ToggleNibble(Value);
    printf("After Bit Toggle Nibble Updated Number is %d\n",iRet);
   



    

    return 0;
}
