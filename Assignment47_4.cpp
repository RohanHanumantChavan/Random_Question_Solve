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
T FindMaximumNumber(T *Arr, int iSize)
{
    T Max = Arr[0];
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
    
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = FindMaximumNumber(Arr,5);
     cout<<"Maximum  Integer Number is : "<<iRet<<"\n";


    
      float fRet = FindMaximumNumber(Brr,4);
     cout<<"Maximum Float Number  is : "<<fRet<<"\n";

    return 0;
}