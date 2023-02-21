
/*


 input :  A
Output : Decimal         Hex      Octal ___________________________________________________________________________________________________
           65             41       101


  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Display Decimal,Hex,Octal
//                        
//    Input : Character
//    Output : True or False
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char Ch)
{
   printf(" Decimal  \t Hex  \t  Octal ");

    printf("_______________________________________________________________________________________________________\n");


   
      printf(" %d  \t  %x   \t   %o \n",Ch,Ch,Ch);
   

   
}
int main()
{
   char cValue = '\0';
   

   printf("Enter the Character\n");
   scanf("%c",&cValue);
    Display(cValue);
   
   return 0;
}
