/*
   
    Input : 
Please Enter Number
11

Output : Count Of ON Bits Number is 3


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept one Number And Display Count Of ON Bits
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;
UINT CountONBits(UINT No)
{
    int iCnt = 0;
    while(No != 0)
    {
        if(No & 1)
        {
            iCnt++;
        }
        No = No >> 1;
    }
    return iCnt;


}
int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);


    iRet = CountONBits(Value);
    printf("Count Of ON Bits Number is %d\n",iRet);
   



    

    return 0;
}