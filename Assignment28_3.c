
/*


 input :  Linked List Elements
Output : Addition of Elements 




*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program which return Addition of All Linked List Elemets
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 21/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
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
int Addition(PNODE First)
{
   int iSum = 0;
   while(First != NULL)
   {
      iSum = iSum + First->data;
      First = First->next;
   }
   return iSum;

}

int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
   
   InsertFisrt(&Head,40);
   InsertFisrt(&Head,30);
   InsertFisrt(&Head,20);
   InsertFisrt(&Head,10);


   

   iRet = Addition(Head);
   printf("Addition of Linked List is : %d\n",iRet);


return 0;
}
