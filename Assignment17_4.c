//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6       8225  665 3  76  953  858
// Output : 665 953  858
//
// Input : 6      444    666   72    97    100   93       
// Output: 444   666  100
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Display 3 Digits Number
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 
 void Find(int Arr[],int iLen)
 {
  int iCnt = 0; int iDigit = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
      {
        printf("%d\t",Arr[iCnt]);
        iDigit++;
      }
     
      
      
  }
      if(iDigit == 0)
      {
        printf("in this Array there is no three Number Digit \n");
      }
  
     
      
      }
    

 int main()
 {
  int iSize = 0, iCnt = 0;
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

   Find(P,iSize);
  
  free(P);
  return 0;
 }