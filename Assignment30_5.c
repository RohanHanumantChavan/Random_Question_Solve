
/*


 input : | 11 |->| 250 |->| 532 |->| 419 |->NULL

Output : Maximum Number  1       5      5       9
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Display Maximum Number in Linked List 
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



int CheckMaximumNumber(int iNo)
{
   int iMax = 0;
   int iDigit = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit > iMax)
      {
         iMax = iDigit;
      }
      iNo = iNo / 10;



   }
  return iMax;
}

   

void DisplayMaximumNumber(PNODE First)
{
   while(First != NULL)
  {
      int iRet = 0;
      iRet = CheckMaximumNumber(First->data);
     printf("%d in this Digit Maximum Number is : %d\n",First->data,iRet);
      First = First->next;
      
    
  } 
  
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   
   
   
   InsertFisrt(&Head,419);
   InsertFisrt(&Head,532);
   InsertFisrt(&Head,250);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplayMaximumNumber(Head);
   

return 0;
}
