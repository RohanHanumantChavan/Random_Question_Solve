
/*


 input :  Marvellous Multi OS
Output : 4



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and Display Capitl character Count 
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
   int iCnt = 0;
   while(*str != '\0')
   {

      if((*str >= 'A') && (*str <= 'Z'))
      {
         iCnt++;
      }
      str++;
   }
   return iCnt;
  
   
     
   
      
     
   }
   
  

int main()
{
   char Arr[20];
   int iRet = 0;
   

   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Count of Capital Character : %d\n",iRet);
   
   return 0;
}
