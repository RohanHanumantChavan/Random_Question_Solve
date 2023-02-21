
/*


 input :  Marvellous

Output :   0

input :  Marvellous Infosystem

Output :  1 



*/                


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Strings from User and Check White Space
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 20/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountSpace(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
       
        
        str++;
    }
    return iCnt;
    

}

int main()
{
    char Arr[20];
    int iRet = 0;


    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    iRet =CountSpace(Arr);

    printf("Number of White Space are : %d \n",iRet);
    return 0;
}

   