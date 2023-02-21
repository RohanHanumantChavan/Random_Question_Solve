
/*


 input :  51
Output : 3

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program which Search First Occurrrence of Particlular Elements from Linked List
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
int FindFirstOccurrence(PNODE First, int iNo)
{
   int iCnt = 1;

   while(First != NULL)
   {
      if(First->data == iNo)
      {
         break;
      }
      iCnt++;
      First = First->next;
   }
   return iCnt;

}

int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;

   InsertFisrt(&Head,101);
   InsertFisrt(&Head,51);
   InsertFisrt(&Head,21);
   InsertFisrt(&Head,11);


   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = FindFirstOccurrence(Head,iValue);
   printf("First Occurrence of %d is : %d",iValue,iRet);


return 0;
}
