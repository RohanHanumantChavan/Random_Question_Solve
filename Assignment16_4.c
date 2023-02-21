//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6  (Start point 60)  (Ending point 90)       85   66   3   76   93   88   
// Output : 85  66  76  88
//
// Input : 6   (Start point 30)  (Ending point 50)      85  66  3   76    93    88       
// Output: 3  
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Accept 2 Seprate Number and print Range that two Number
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
 void Count(int Arr[],int iLen, int iNo1, int iNo2)
 {
  int iCnt = 0;
  int iCount = 0;

  for(iCnt = 0; iCnt < iLen; iCnt++)
  {
      if((Arr[iCnt] >= iNo1 && (Arr[iCnt]) <= iNo2))
      {
           printf("%d\t",Arr[iCnt]);
      }
  }
      
      
      }
    

 int main()
 {
  int iSize = 0, iCnt = 0;
  int *P = NULL, iValue1 = 0, iValue2 = 0;
  
  

  printf("Enter Number of Elements: \n");
  scanf("%d",&iSize);

  printf("Enter the Starting Number : \n");
  scanf("%d",&iValue1);

  printf("Enter the Ending Number : \n");
  scanf("%d",&iValue2);

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

   Count(P,iSize,iValue1,iValue2);
  
  
   Free(P);
  return 0;
 }