//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 6    85 66  3  15  93 88
// Output :  15
//
// Input : 5        10  12  60  40  30
// Output: 30 60 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and Display all Such Elements which are Divisible by 5 And 3
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 void Display(int Arr[],int iLen)
 {
  int iCnt = 0;
for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if((Arr[iCnt] % 11 == 0))
      {
       
             printf(" %d Number Multiples by 11 :\n",Arr[iCnt]);
      }
      
  }

      
 }
 int main()
 {
  int iSize = 0, iRet = 0, iCnt = 0;
  int *P = NULL;
  

  printf("Enter Number of Elements: \n");
  scanf("%d",&iSize);

  P = (int *)malloc(iSize * sizeof(int));

  if(P == NULL)
  {
    printf("Unable to Allocate Memory");
    return -1;
  }
  int iLength = iSize;
  printf("Enter %d  Elements \n",iLength);

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    printf("Enter Elements : %d\n",iCnt+1);
    scanf("%d",&P[iCnt]);
  }

     Display(P,iSize);

  free(P);

  return 0;
 }