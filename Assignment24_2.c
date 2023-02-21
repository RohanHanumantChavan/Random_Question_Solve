
/*


 input :  F
Output : f

 input :  d
Output : D

input :  4
Output : 4
  
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Change Case
//                        
//    Input : Character
//    Output : True or False
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ChangeCase(char Ch)
{
   if((Ch >= 'A') && (Ch <= 'Z'))
   {
      printf("%c",Ch +32);
   }
   else if((Ch >= 'a') && (Ch <= 'z'))
   {
      printf("%c",Ch - 32);
   }
   else
   {
      printf(" %c\n",Ch);
   }
}
int main()
{
   char cValue = '\0';
   

   printf("Enter the Character\n");
   scanf("%c",&cValue);
    ChangeCase(cValue);
   
   return 0;
}
