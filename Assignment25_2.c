
/*


 input :  Marvellous
Output : 9



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and Display Small character Count 
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
   int iCnt = 0;
   while(*str != '\0')
   {

      if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);
    printf("Count of Small Character : %d\n",iRet);
   
   return 0;
}
