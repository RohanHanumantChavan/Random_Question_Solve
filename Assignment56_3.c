/*
   
Input : HElloWOrlD

Output : Count Of Small Case Latter is : 5



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
int CountSmallCase(char *str)
{
  static int iCnt = 0;
    if(*str != '\0')
    {
         if((*str >= 'a') && (*str <= 'z'))
         {
             iCnt++;
         }
         str++;
         CountSmallCase(str);
    }
    return iCnt;
}
int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Please Enter String : \n");
  scanf(" %[^'\n']s",Arr);


   iRet = CountSmallCase(Arr);
   printf(" Count Of Small Case Latter is : %d\n",iRet);


   return 0;
}