//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6     85   66   3   80    93   88   
// Output : 0
//
// Input : 6    85  11  3   15   11   111       
// Output: 2
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and return Frequency of 11 Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 int Count(int Arr[],int iLen)
 {
  int iCnt = 0;
  int iCount = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if(Arr[iCnt] == 11)
      {
        iCount++;
      }
      
      
  }
      return iCount;


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

  iRet = Count(P,iSize);
  printf("Frequency of 11 Number : %d\n",iRet);
  free(P);

  return 0;
 }