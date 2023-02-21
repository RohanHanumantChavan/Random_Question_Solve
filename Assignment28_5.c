
/*


 input :  | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL
Output : 28 & 6

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name :  Write Program which Display Perfect  Number of Linked List Elemets
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
int FindMinimum(PNODE First)
{
   int iMin = 0;
   iMin = First->data;
   while(First != NULL)
   {
      if(First->data < iMin)
      {
         iMin = First->data;
      }
      First = First->next;
   }
   return iMin;

}

int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
   InsertFisrt(&Head,640);
   InsertFisrt(&Head,240);
   InsertFisrt(&Head,20);
   InsertFisrt(&Head,230);
   InsertFisrt(&Head,110);

   Display(Head);


   

   iRet = FindMinimum(Head);
   printf("Smallest Number of Linked List is : %d\n",iRet);


return 0;
}
