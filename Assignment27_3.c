
/*


 input :  Marvellous Multi OS         (M)
Output : 0

 input :  Marvellous Multi OS          (e)
Output : 4
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and display first occurance
//                        
//    Input : Character
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>



int Check(char *str, char Ch)
{
   int iCnt = 0;
      
   while(*str != '\0')
   {
      if(*str == Ch)
      {
          break;
      
      }
      iCnt++;
      str++;
      
   }
   return iCnt;
   
}

int main()
{   
   char Arr[20];
   char cValue = '\0';
   int iRet = 0;

   printf("Enter the String \n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the Character\n");
   scanf(" %c",&cValue);

   iRet = Check(Arr,cValue);

printf(" It Is first Occurance Character : %d\n",iRet);

return 0;
}
  
