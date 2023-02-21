/*
   
Input : Accept Number From User 5


Output :  5       *       4       *       3       *       2       *       1       *


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept Number From User And Display Pattern using Recursive Apporch
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int strlenR(char *str)
{
   
   static int iCnt = 0;
   if(*str != '\0')
   {
      
      
      iCnt++;
      str++;
      strlenR(str);

  }
   return iCnt;
   
}
int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Please Enter String : \n");
 scanf(" %[^'\n']s",Arr);
 

  iRet = strlenR(Arr);
  printf("Length Of String is : %d\n",iRet);

  return 0;
}