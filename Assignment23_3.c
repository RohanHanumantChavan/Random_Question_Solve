
/*


 input :  F
Output : Capital

 input :  f
Output : Not Capital
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display it is Capital or not
//                        
//    Input : Character
//    Output : True or False
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char Ch)
{
   if((Ch >= '0') && (Ch <= '9'))
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
}
int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the Character\n");
   scanf("%c",&cValue);
   bRet = CheckDigit(cValue);
   if(bRet == TRUE)
   {
      printf(" It Is  Digit\n");
   }
   else
   {
      printf(" It Is Not Digit\n");
   }
   return 0;
}
