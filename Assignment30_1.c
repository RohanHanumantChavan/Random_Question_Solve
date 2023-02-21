
/*


 input : | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL

Output :   11 This Digit Reverse Number is : 11
           28 This Digit Reverse Number is : 82
           17 This Digit Reverse Number is : 71
           41 This Digit Reverse Number is : 14
           6 This Digit Reverse Number is : 6
           89 This Digit Reverse Number is : 98
 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Reverse the  Digit in Linked List 
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



int Reverse(int iNo)
{
   int iRev = 0;
   int iDigit = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iRev = (iRev * 10) + iDigit;
      iNo = iNo / 10;



   }
  return iRev;
}

   

void DisplayReverse(PNODE First)
{
   while(First != NULL)
  {
      int iRet = 0;
      iRet = Reverse(First->data);
     printf(" %d This Digit Reverse Number is : %d\n",First->data,iRet);
      First = First->next;
      
    
  } 
  
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   
   
   InsertFisrt(&Head,89); 
   InsertFisrt(&Head,6);
   InsertFisrt(&Head,41);
   InsertFisrt(&Head,17);
   InsertFisrt(&Head,28);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplayReverse(Head);
   

return 0;
}
