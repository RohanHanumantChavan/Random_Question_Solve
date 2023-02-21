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
int CountSmall(char Name[])
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

        if((Data[i] >= 'a') && (Data[i] <= 'z'))
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

    

    iRet = CountSmall(Fname);
    printf("Count Of Small Case Character is  %d\n",iRet);
   

       

    
    


    

    return 0;
}

