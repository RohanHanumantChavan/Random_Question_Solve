
/*


 input :  Marvellous Multi OS

Output :    mARVELLOUS mULTI os



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and Change String toggle Case  
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrWrx(char Brr[])
{
   char Ch = '\0';
   int iCnt = 0;
   
   while(Brr[iCnt] != '\0')
   {
       Ch = Brr[iCnt];

      if((Ch >= 'a') && (Ch <= 'z'))
      {
         Brr[iCnt] = Brr[iCnt] - 32;
      }
      else if((Ch >= 'A') && (Ch <= 'Z'))
      {
         Brr[iCnt] = Brr[iCnt] + 32;
      }
      
      iCnt++;
   }
   printf("Convert String : %s",Brr);
  
   
     
   
      
     
   }
   
  

int main()
{
   char Arr[20];
   int iRet = 0;
   

   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);

    StrWrx(Arr);
   
   
   return 0;
}
