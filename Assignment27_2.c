
/*


 input :  Marvellous Multi OS         (e)
Output : 2

 input :  Marvellous Multi OS          (W)
Output : 0
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Character from User and Check it is Present or not
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
          iCnt++;
      
      }
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

printf(" It Is  Present count Character : %d\n",iRet);

return 0;
}
  
