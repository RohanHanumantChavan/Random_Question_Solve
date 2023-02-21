//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input :  6       8225 665  3   76  953  858 
// Output : 17   17  3  13   17   21
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept N Number from User and Display Summination of DFigits 
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 15/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 #include<stdlib.h>
 
 void DigitSum(int Arr[],int iLen)
 {
  int iCnt = 0; 
 
for(iCnt = 0; iCnt < iLen; iCnt++)
   {
     int iSum = 0, iDigit = 0;
      while(Arr[iCnt] != 0)
      {
        iDigit = Arr[iCnt] % 10;
        {
             iSum = iSum + iDigit;
             
       }
        
        Arr[iCnt] = Arr[iCnt] / 10;


     }
    
  printf("%d\t",iSum);
      
      
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

   DigitSum(P,iSize);
  
  free(P);
  return 0;
 }