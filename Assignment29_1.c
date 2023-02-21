
/*


 input : | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL

Output :  28 Number is Perfect Number
           6 Number is Perfect Number

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program which Display Perfect Number Number of Linked List Elemets
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
bool CheckPerfect(int iNo)
{
   int iSum = 0;
   int iTemp = iNo;
   int iCnt = 0;
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
      if((iNo % iCnt)== 0)
      {
         iSum = iSum + iCnt;
      }
   }
   return(iSum == iTemp);

   
}
void DisplayPerfect(PNODE First)
{
   while(First != NULL)
  {
    if(CheckPerfect(First->data) == true)
    {
      printf(" %d Number is Perfect Number \n",First->data);

    }
    First = First->next;
  } 
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   int iRet = 0;
   
    InsertFisrt(&Head,89);
   InsertFisrt(&Head,6);
   InsertFisrt(&Head,41);
   InsertFisrt(&Head,17);
   InsertFisrt(&Head,28);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplayPerfect(Head);
   

return 0;
}
