
/*


 input :  11
Output : Last Occurrances is 5

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program which Search Last Occurrrence of Particlular Elements from Linked List
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
int FindLastOccurrence(PNODE First, int iNo)
{
   int iCnt = 1;
   int iCount = 0;

   while(First != NULL)
   {
      if(First->data == iNo)
      {
        iCount = iCnt;
      }
      iCnt++;
      First = First->next;
   }
   return iCount;

}

int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
   InsertFisrt(&Head,11);
   InsertFisrt(&Head,101);
   InsertFisrt(&Head,51);
   InsertFisrt(&Head,21);
   InsertFisrt(&Head,11);


   printf("Enter the Number \n");
   scanf("%d",&iValue);

   iRet = FindLastOccurrence(Head,iValue);
   printf("Last Occurrence of %d is : %d",iValue,iRet);


return 0;
}
