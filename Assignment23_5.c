
/*


 input :  C
Output : C Your Exam at 9.20 Am :

 input :  d
 
Output : d Your Exam at 10.30 AM 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display Division Exam time
//                        
//    Input : Character
//    Output : True or False
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Check(char Ch)
{
   if((Ch == 'a') || (Ch == 'A'))
   {
      printf(" %c Your Exam at 7 Am : \n",Ch);
   }
   else if((Ch == 'b') || (Ch == 'B'))
   {
      printf(" %c Your Exam at 8.30 AM : \n",Ch);
   }
   else if((Ch == 'c') || (Ch == 'C'))
   {
      printf(" %c Your Exam at 9.20 Am : \n",Ch);
   }
   else if((Ch == 'd') || (Ch == 'D'))
   {
      printf(" %c Your Exam at 10.30 AM : \n",Ch);
}
}
int main()
{
   char cValue = '\0';

   printf("Enter the Character\n");
   scanf("%c",&cValue);
    Check(cValue);
  
   return 0;
}
