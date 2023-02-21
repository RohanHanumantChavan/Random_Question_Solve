/*
   


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write C Program Accept File Name And Display File Operation
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
void DisplayN(char Name[], int Size)
{
    char Data[100];
    int fd = 0;
    int Length = 0;
    int iCount = 0, i = 0;

    fd = open(Name,O_RDWR);
    if(fd == -1)
    {
        return;
    } 

       read(fd,Data,Size);
       printf("Data From File is : \n");
        write(1,Data,Size);

       

    
    close(fd);  

}
int main()
{
    char Fname[20];
    int iRet = 0;
    int iSize = 0;

    printf("Please Enter File Name  That You Want to Create  : \n");
    scanf("%s",Fname);
    
    printf("Please Enter File Data Size Number  : \n");
    scanf(" %d",&iSize);

    

     DisplayN(Fname,iSize);
    

       

    
    


    

    return 0;
}

