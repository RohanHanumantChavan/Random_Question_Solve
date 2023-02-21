//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6  (second 66)        85   66   3   66   93   88   
// Output : index last Occurance is 3
//
// Input : 6  (second 12)     85  11  3   15   11   111       
// Output: -1    Number is not Occurance
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Accept 1 Seprate Number and Check that Number Last Occurance
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 int Count(int Arr[],int iLen, int iNo)
 {
  int iCnt = 0;
  int iCount = 0;

  for(iCnt = iLen-1; iCnt >= 0; iCnt--)
  {
      if(Arr[iCnt] == iNo)
      {
        break;
      }
  }
      if(iCnt == -1)
      {
        return -1;
      }
      else 
      {
        return iCnt;
      }
      
      }
    

 int main()
 {
  int iSize = 0, iCnt = 0;
  int *P = NULL, iValue = 0;
  int iRet = 0;
  

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
  if(iRet == -1)
  {

    printf("%d Number not Occurance in this Array : %d\n",iValue);
  }
  else 
  {
    printf(" %d Number Occurance in Array at Last index  : %d\n",iValue,iRet);
  }
  
free(P);
  return 0;
 }