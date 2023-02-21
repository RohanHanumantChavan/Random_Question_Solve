/*
   
    Input : 
Please Enter First Number
10
Please Enter Second Number
15

Output : 2   4


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Two Number And Display Comman Position That Two Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 13/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;
void DisplayCommanBits(UINT No1, UINT No2)
{
    int iCnt = 1;
    int Digit1 = 0;
    int Digit2 = 0;
    while(No1 != 0 && No2 != 0)
    {
        Digit1 = No1 % 2;
        Digit2 = No2 % 2;
        if(Digit1 == Digit2 )
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        No1 = No1 >> 1;
        No2 = No2 >> 1;
    }
    

}
int main()
{
    UINT Value1 = 0;
    UINT Value2 = 0;
    

    printf("Please Enter First Number \n");
    scanf("%d",&Value1);

     printf("Please Enter Second Number \n");
    scanf("%d",&Value2);


    DisplayCommanBits(Value1,Value2);
  



    

    return 0;
}

