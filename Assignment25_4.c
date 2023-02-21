
/*


 input :  marvellous
Output : it is vowel 

input :  xyz
Output : it is not vowel 



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and check vowel or not
//                        
//    Input : String
//    Output : BOOL
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Count(char *str)
{
   int iCount = 0;
   int iCnt = 0; 
   while(*str != '\0')
   {

      if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') )
      {
        iCount++;
      }
      
      iCnt++;
      *str++;
   }
   if(iCount != 0)
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
   char Arr[20];
   BOOL bRet = FALSE;
   

   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);

    bRet = Count(Arr);
   if(bRet == TRUE)
   {
      printf(" It Is  Vowel\n");
   }
   else
   {
      printf(" It Is Not Vowel \n");
   }
   return 0;
   
   return 0;
}
