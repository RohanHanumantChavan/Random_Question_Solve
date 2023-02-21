
/*


 input :  %
Output : Special Character

 input :  d
Output : Not Special Character
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display Character is Special or not
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

BOOL CheckSpecialCharacter(char Ch)
{
   if((Ch >= 0 && Ch <= 47) || (Ch >= 58 && Ch <= 64) ||  (Ch >= 91 && Ch <= 96) || (Ch >= 123))
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
   bRet = CheckSpecialCharacter(cValue);
   if(bRet == TRUE)
   {
      printf(" It Is  Special Character\n");
   }
   else
   {
      printf(" It Is Not Special Character\n");
   }
   return 0;
}
