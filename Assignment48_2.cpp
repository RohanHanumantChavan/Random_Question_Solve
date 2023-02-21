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
int Frequency(T *Arr,T No, int iSize)
{
    int iCount = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
           iCount++;
        }
    }
    return iCount;
    
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
   

    int iRet = Frequency(Arr,10,9);
     cout<<"Frequency of "<<10<<" Number is : "<<iRet<<"\n";


    
   

    return 0;
}