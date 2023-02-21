
/*


 input :  F
Output : True

 input :  &
Output : False
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display it is Alphabet or not
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

BOOL CheckCharacter(char Ch)
{
   if((Ch >= 'A') && (Ch <= 'z'))
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
   bRet = CheckCharacter(cValue);
   if(bRet == TRUE)
   {
      printf(" It Is  Character\n");
   }
   else
   {
      printf(" It Is Not Character\n");
   }
   return 0;
}
