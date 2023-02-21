
/*


 input : | 11 |->| 28 |->| 17 |->| 414 |->| 6 |->| 89 |->NULL

Output :   11 Number is Pallindrome
           414 Number is Pallindrome
           6 Number is Pallindrome
 
  


*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program Display the pallindrome Number in Linked List 
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


bool Reverse(int iNo)
{
   int iRev = 0;
   int iDigit = 0;
   int iTemp = iNo;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iRev = (iRev * 10) + iDigit;
      iNo = iNo / 10;



   }
  return(iRev == iTemp);
}

   

void DisplayPallindrome(PNODE First)
{
   while(First != NULL)
  {
      bool bRet = false;
      bRet = Reverse(First->data);
     if(bRet == true)
     {
      printf("%d Number is Pallindrome \n",First->data);
     }
     
      First = First->next;
      
    
  } 
  
}



int main()
{
   PNODE Head = NULL;
   int iValue = 0;
   
   
   InsertFisrt(&Head,89); 
   InsertFisrt(&Head,6);
   InsertFisrt(&Head,414);
   InsertFisrt(&Head,17);
   InsertFisrt(&Head,28);
   InsertFisrt(&Head,11);

   Display(Head);


   

   DisplayPallindrome(Head);
   

return 0;
}
