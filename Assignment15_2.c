//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 7    85 66 3 80  93 88 90    (3 - 4)
// Output : 1
//
// Input : 5        10  35  12  13 31    (3 - 2)
// Output: 1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and Display Count of Difference Even and Odd
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 int CountEven(int Arr[],int iLen)
 {
  int iCnt = 0;
  int iCountEven = 0, iCountOdd = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if((Arr[iCnt] % 2) == 0)
      {
        iCountEven++;
      }
      else
      {
          iCountOdd++;
      }
      
  }
      return iCountEven - iCountOdd;


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

  iRet = CountEven(P,iSize);
  printf("Difference between Even and Odd Count :%d\n",iRet);
  free(P);

  return 0;
 }