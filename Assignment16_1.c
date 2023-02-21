//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6  (second 66)        85   66   3   66   93   88   
// Output : Present
//
// Input : 6  (second 12)     85  11  3   15   11   111       
// Output: Absent
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Accept 1 Seprate Number and Check that Present or not
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
 bool Count(int Arr[],int iLen, int iNo)
 {
  int iCnt = 0;
  int iCount = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if(Arr[iCnt] == iNo)
      {
        break;
      }
  }
      if(iCnt == iLen)
      {
        return false;
      }
      else 
      {
        return true;
      }
      
      }
    

 int main()
 {
  int iSize = 0, iCnt = 0;
  int *P = NULL, iValue = 0;
  bool bRet = false;
  

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

  bRet = Count(P,iSize,iValue);
  if(bRet == true)
  {

    printf("Number is Present in Array : \n");
  }
  else 
  {
    printf("Number is Absent in Array : \n");
  }
  

  return 0;
 }