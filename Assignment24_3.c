
/*


 input :  M
Output : M       N       O       P       Q       R       S       T       U       V       W       X       Y       Z

 input :  m
Output :m       l       k       j       i       h       g       f       e       d       c       b       a


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display 
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
   int iCnt = 0;
   if((Ch >= 'A') && (Ch <= 'Z'))
   {
      for(iCnt = Ch; iCnt <= 'Z'; iCnt++,Ch++)
      {
         printf("%c\t",Ch);
      }
       
         
         
       }
       else
       {
         for(iCnt = Ch; iCnt >='a'; iCnt--,Ch--)
      {
         printf("%c\t",Ch);
      }
   
     
   
      
     
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
