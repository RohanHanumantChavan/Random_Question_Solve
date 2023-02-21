
/*


 input :   | 110 |->| 230 |->| 20 |->| 240 |->| 640 |->NULL

Output :Addition 110 This Digit is : 2
        Addition 230 This Digit is : 5
        Addition 20 This Digit is : 2
        Addition 240 This Digit is : 6
        Addition 640 This Digit is : 10

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Display Addition of Digit in Linked List 
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 21/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)
struct node
{
   int data;
   struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void InsertFisrt(PPNODE First, int No)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   newn->data = No;
   newn->next = NULL;

   if(*First == NULL)
   {
      *First =newn;
   }
   else
   {
      newn->next = *First;
      *First = newn;
   }
}

void Display(PNODE First)
{
   printf("Elements From Linked List is \n");
   while(First != NULL)
   {
      printf("| %d |->",First->data);
      First = First->next;
   }
   printf("NULL \n");
}

int DigitAddition(int iNo)
{
   int iDigit = 0;
   int iSum = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iSum = iSum + iDigit;
      iNo = iNo / 10;
   }
   return iSum;
}

   

void DisplayDigitAddition(PNODE First)
{
   while(First != NULL)
  {
    int  iRet = 0;

    iRet =  DigitAddition(First->data);
    printf("Addition %d This Digit is : %d\n",First->data,iRet);
   
    First = First->next;
  } 
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   
   
    
   InsertFisrt(&Head,640);
   InsertFisrt(&Head,240);
   InsertFisrt(&Head,20);
   InsertFisrt(&Head,230);
   InsertFisrt(&Head,110);

   Display(Head);


   

   DisplayDigitAddition(Head);
   

return 0;
}
