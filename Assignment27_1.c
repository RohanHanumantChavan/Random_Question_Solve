
/*


 input :  Marvellous Multi OS         (e)
Output : Present

 input :  Marvellous Multi OS          (W)
Output : Absent
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Check it is Present or not
//                        
//    Input : Character
//    Output : True or False
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char *str, char Ch)
{
      
   while(*str != '\0')
   {
      if(*str == Ch)
      {
          
      break;
      }
      str++;
   }
   if(*str == '\0')
   {
      return FALSE;
   }
   else
   {
      return TRUE;
   }
}

int main()
{   
   char Arr[20];
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the String \n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the Character\n");
   scanf(" %c",&cValue);

   bRet = Check(Arr,cValue);

   if(bRet == TRUE)
   {
      printf(" It Is  Present Character\n");
   }
   else
   {
      printf(" It Is Not Present Character\n");
   }
   return 0;
}
