//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6  (second 66)        85   66   3   66   93   88   
// Output : 2
//
// Input : 6  (second 12)     85  11  3   15   11   111       
// Output: 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N from User and Accept 1 Seprate Number Display Frequency of that Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 int Count(int Arr[],int iLen, int iNo)
 {
  int iCnt = 0;
  int iCount = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if(Arr[iCnt] == iNo)
      {
        iCount++;
      }
      
      
  }
      return iCount;


  }
 int main()
 {
  int iSize = 0, iRet = 0, iCnt = 0;
  int *P = NULL, iValue = 0;
  

  printf("Enter Number of Elements: \n");
  scanf("%d",&iSize);

  printf("Enter the Number : \n");
  scanf("%d",&iValue);

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

  iRet = Count(P,iSize,iValue);
  printf("Frequency of %d  Number : %d\n",iValue,iRet);
  free(P);

  return 0;
 }