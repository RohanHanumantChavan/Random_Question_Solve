
/*


 input : | 11 |->| 250 |->| 532 |->| 415 |->NULL

Output : Smallest Number  1       0       2       1
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Display Smallest Number in Linked List 
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



int CheckSmallest(int iNo)
{
   int iMin = iNo;
   int iDigit = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit < iMin)
      {
         iMin = iDigit;
      }
      iNo = iNo / 10;



   }
  return iMin;
}

   

void DisplaySmallestNumber(PNODE First)
{
   while(First != NULL)
  {
      int iRet = 0;
      iRet = CheckSmallest(First->data);
     printf("%d in this Digit Smallest Number is : %d\n",First->data,iRet);
      First = First->next;
      
    
  } 
  
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   
   
   
   InsertFisrt(&Head,415);
   InsertFisrt(&Head,532);
   InsertFisrt(&Head,250);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplaySmallestNumber(Head);
   

return 0;
}
