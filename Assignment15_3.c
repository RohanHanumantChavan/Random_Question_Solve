//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 7    85 66 11 80  93 88 90    
// Output : 11 is Present
//
// Input : 5        10  35  12  13 31    
// Output: 11 is Absent
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and Check 11 Number is Present or not
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;
 BOOL Check(int Arr[],int iLen)
 {
  int iCnt = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if(Arr[iCnt] == 11)
      {
          return TRUE;
      }
     
      }
    
    }
 int main()
 {
  int iSize = 0, iCnt = 0;
  int *P = NULL;

  BOOL bRet = FALSE;
  

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

  bRet = Check(P,iSize);
  if(bRet == TRUE)
  {
       printf("Numbet 11 is Present : \n");
  }
  else
  {
    printf("Number 11 is Absent : \n");
  }
  

  return 0;
 }