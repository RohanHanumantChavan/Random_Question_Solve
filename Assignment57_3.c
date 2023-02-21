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
    char Data[100];
    int Length = 0;

    printf("Please Enter File Name  That You Want to Create  : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }
    Length = read(fd,Data,Length);
    
    printf("Data From File is : \n");
       write(1,Data,Length);

       close(fd);

    
    


    

    return 0;
}

