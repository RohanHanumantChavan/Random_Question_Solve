
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

BOOL CheckCapital(char Ch)
{
   if((Ch >= 'A') && (Ch <= 'Z'))
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
   bRet = CheckCapital(cValue);
   if(bRet == TRUE)
   {
      printf(" It Is  Capital Character\n");
   }
   else
   {
      printf(" It Is Not Capital Character\n");
   }
   return 0;
}
