/*



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array From user and Display Generic operation
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
T AdditionN(T *Arr, int iSize)
{
    T Sum;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
    
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = AdditionN(Arr,5);
     cout<<"Addition of Integer Number is : "<<iRet<<"\n";


    
      float fRet = AdditionN(Brr,4);
     cout<<"Addition of Float Number  is : "<<fRet<<"\n";

    return 0;
}