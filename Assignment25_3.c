
/*


 input :  MarvellouS
Output : 6     (8 -2)  



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and Display difference of Capitl character Count and Small Character count
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char *str)
{
   int iCapital = 0;
   int iSmall = 0;
   while(*str != '\0')
   {

      if((*str >= 'A') && (*str <= 'Z'))
      {
         iCapital++;
      }
      else
      {
          iSmall++;
      }
      str++;
   }
   return  iSmall - iCapital;
  
   
     
   
      
     
   }
   
  

int main()
{
   char Arr[20];
   int iRet = 0;
   

   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);
    printf("Difference of Capital and Small Character : %d\n",iRet);
   
   return 0;
}
