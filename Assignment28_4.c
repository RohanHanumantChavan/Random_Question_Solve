
/*


 input :  Find Max Number in Linked List
Output : 320


  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program which return Maximum Number of Linked List Elemets
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
int FindMaximum(PNODE First)
{
   int iMax = 0;
   iMax = First->data;
   while(First != NULL)
   {
      if(First->data > iMax)
      {
         iMax = First->data;
      }
      First = First->next;
   }
   return iMax;

}

int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
   
   InsertFisrt(&Head,240);
   InsertFisrt(&Head,320);
   InsertFisrt(&Head,230);
   InsertFisrt(&Head,110);

   Display(Head);


   

   iRet = FindMaximum(Head);
   printf("Maximum Number of Linked List is : %d\n",iRet);


return 0;
}
