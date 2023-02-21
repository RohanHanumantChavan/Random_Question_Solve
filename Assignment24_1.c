
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

void DisplayASCII()
{
   int i = 0;

   printf("_______________________________________________________________________________________________________\n");

   printf("ASCII table  \n");

  printf("_______________________________________________________________________________________________________\n");


  printf("Character \t Decimal  \t Hex  \t  Octal ");

   for(i = 0; i <=127; i++)
   {
      printf("%c \t %d  \t  %x   \t   %o \n",i,i,i,i,i);
   }

    printf("_______________________________________________________________________________________________________\n");
  
}
int main()
{
  DisplayASCII();
  
   return 0;
}
