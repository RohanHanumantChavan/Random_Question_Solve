/*
   
Input : HE llo WOr lD

Output :  White Space Of String is : 3



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Write Program in Recursive Approach
//                        
//    Input : String
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountWhiteSpace(char *str)
{
  static int iCnt = 0;
    if(*str != '\0')
    {
         if(*str == ' ')
         {
            iCnt++;
         }
         str++;
         CountWhiteSpace(str);
    }
    return iCnt;
}
int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Please Enter String : \n");
  scanf(" %[^'\n']s",Arr);


   iRet = CountWhiteSpace(Arr);
   printf("White Space Of String is : %d\n",iRet);


   return 0;
}