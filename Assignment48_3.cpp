/*



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array From user And Display Generic operation
//                        
//    Input : Integer
//    Output :Integer
//    Author : Rohan Hanumant Chavan
//    Date : 9/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
template<class T>
int SearchFirst(T *Arr,T No, int iSize)
{
    int iCount = 0;
    int iCnt = 0;
    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
          break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
   

    int iRet = SearchFirst(Arr,40,9);
    if(iRet == -1)
    {
           cout<<40<<" is Not Occurances in Array "<<"\n";
    }
    else
     {
        cout<<"First Occurances of "<<40<<" is : "<<iRet<<"\n";
     }
     


    
   

    return 0;
}