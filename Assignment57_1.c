/*
   
Input : 523


Output : 523 in Thise Digit After Reverse Digit is : 325


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept File Name From User and Open the that Name File
//                        
//    Input : FileName
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 19/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
  char Fname[20];
  int fd = 0;

  printf("Please Enter the File Name You Want to Open\n");
  scanf("%s",Fname);
  
  fd = creat(Fname,0777);
  fd = open(Fname,O_RDONLY);
  
  if(fd == -1)
  {
    printf("Unable to Open File \n");
  }
  else
  {
    printf("File is Successful Opened With FD : %d\n",fd);
  }


  return 0;
}