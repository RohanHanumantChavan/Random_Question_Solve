//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6       15   66   3   70   10   88   
// Output : 45
//
// Input : 6      44     66   72    70    10   88       
// Output: 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Display Odd Product
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 
 int Product(int Arr[],int iLen)
 {
  int iCnt = 0;
  int iMult = 1;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if(Arr[iCnt] % 2 != 0)
      {
          iMult = iMult * Arr[iCnt];
      }
  }
  return iMult;
     
      
      }
    

 int main()
 {
  int iSize = 0, iCnt = 0;
  int *P = NULL;
  int iRet = 0;
  

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

  iRet =Product(P,iSize);
  printf("Product is : %d\n ",iRet);
  free(P);
  return 0;
 }