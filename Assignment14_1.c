//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 6    85 66 3 80  93 88
// Output : 53
//
// Input : 5        10  20  30  40  50
// Output: -30
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and Return Difference Between Summination of Even Number and Summination of Odd Number  
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 int Differen(int Arr[],int iLen)
 {
  int iCnt = 0;
  int iEven = 0, iOdd = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if((iCnt % 2) == 0)
      {
        iEven = iEven + Arr[iCnt];
      }
      else
      {
        iOdd = iOdd + Arr[iCnt];

      }
  }
      return iOdd - iEven;


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

  iRet = Differen(P,iSize);
  printf("Differen is :%d\n",iRet);
  free(P);

  return 0;
 }