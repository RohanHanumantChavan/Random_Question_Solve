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
int CountNumber(char Name[])
{
    char Data[100];
    int fd = 0;
    int Length = 0;
    int iCount = 0, i = 0;

    fd = open(Name,O_RDWR);
    if(fd == -1)
    {
        return -1;
    }

 while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < Length; i++)
        {

        if((Data[i] >= '0') && (Data[i] <= '9'))
        {
            iCount++;
        }

        }
       
    }
    return iCount; 
    close(fd);  

}
int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Please Enter File Name  That You Want to Create  : \n");
    scanf("%s",Fname);

    

    iRet = CountNumber(Fname);
    printf("Count Of Number is  %d\n",iRet);
   

       

    
    


    

    return 0;
}

