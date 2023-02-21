
/*


 input :    11 |->| 20 |->| 32 |->| 41 |->NULL

Output :  Addition of Even elements is 52
 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program return Addition of Even Number of Linked List Elemets
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
int AdditionEvenElements(PNODE First)
{
   int iSum = 0;
   while(First != NULL)
   {
      if((First->data % 2) == 0)
      {
         iSum = iSum + First->data;
      }
      First = First->next;
   }
   return iSum;
}




int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
    
   InsertFisrt(&Head,41);
   InsertFisrt(&Head,32);
   InsertFisrt(&Head,20);
   InsertFisrt(&Head,11);

   Display(Head);


   

   iRet = AdditionEvenElements(Head);
   printf("Addition of Even elements is %d\n",iRet);
   

return 0;
}
