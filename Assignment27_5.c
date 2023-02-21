
/*


 input :  abcd
Output : dcba

 input :  dcba
Output : abcd
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and display Reverse
//                        
//    Input : Character
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void strrevX(char *str)
{
   char * start = NULL;
   char *end = NULL;
   char temp = '\0';

   start = str;
   end = str;

   while(*end != '\0')
   {
    end++;
   }
   end--;
   while(start < end)
   {
      temp = *start;
      *start = *end;
      *end = temp;

      start++;
      end--;
   }
}


int main()
{
    char Arr[20];
    


    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    printf("Reverse String is : %s \n",Arr);
    
    return 0;
}

   