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
T FindSmallestNumber(T *Arr, int iSize)
{
    T Min = Arr[0];
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    return Min;
    
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = FindSmallestNumber(Arr,5);
     cout<<"Smallest Integer Number is : "<<iRet<<"\n";


    
      float fRet = FindSmallestNumber(Brr,4);
     cout<<"Smallest Float Number  is : "<<fRet<<"\n";

    return 0;
}