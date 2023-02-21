
/*


 input :   | 110 |->| 230 |->| 320 |->| 240 |->| 22 |->| 89 |->NULL

Output : Second Maximum Nunber is 240
 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program return Second Largest Number of Linked List Elemets
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
int SecondMaximum(PNODE First)
{
   int iMaxFirst = First->data;
   int iMaxSecond = First->data;
   while(First != NULL)
   {
      if(First->data > iMaxFirst)
      {
         iMaxSecond = iMaxFirst;
         iMaxFirst = First->data;
      }
       else if(First->data > iMaxSecond)
      {
         iMaxSecond = First->data;
      }
      First = First->next;
   }
   return iMaxSecond;
}




int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
    InsertFisrt(&Head,89);
   InsertFisrt(&Head,22);
   InsertFisrt(&Head,240);
   InsertFisrt(&Head,320);
   InsertFisrt(&Head,230);
   InsertFisrt(&Head,110);

   Display(Head);


   

   iRet = SecondMaximum(Head);
   printf("Second Maximum Nunber is %d\n",iRet);
   

return 0;
}
