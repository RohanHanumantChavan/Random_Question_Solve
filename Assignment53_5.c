/*
   
Input : 


Output :   a       b       c       d       e       f


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept And Display Pattern using Recursive Apporch
//                        
//    Input : 
//    Output :Character
//    Author : Rohan Hanumant Chavan
//    Date : 18/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
  static int iCnt = 0;
  static char Ch = 'a';
  if(iCnt <= 5)
  {
    
     printf("%c\t",Ch);
     iCnt++;
     Ch++;
    Display();
     
    
  }
}
int main()
{
  Display();
  return 0;
}