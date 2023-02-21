
/*


 input :   11 |->| 20 |->| 17 |->| 41 |->| 22 |->| 89 |->NULL

Output : 11 Number is Prime Number
         17 Number is Prime Number
         41 Number is Prime Number
         89 Number is Prime Number

 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Display Prime Number of Linked List Elemets
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
bool CheckPrime(int iNo)
{
   
   
   int iCnt = 0;
   for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
   {
      if((iNo % iCnt)== 0)
      {
         return false;
         break;
      }
   }
   return true;

   
}
void DisplayPrime(PNODE First)
{
   while(First != NULL)
  {
    if(CheckPrime(First->data) == true)
    {
      printf(" %d Number is Prime Number \n",First->data);

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
   InsertFisrt(&Head,22);
   InsertFisrt(&Head,41);
   InsertFisrt(&Head,17);
   InsertFisrt(&Head,20);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplayPrime(Head);
   

return 0;
}
