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
T FindMaximumNumber(T iNo1, T iNo2, T iNo3)
{
    T temp = iNo1;
    if(temp < iNo2)
    {
        temp = iNo2;
    }
    if(temp < iNo3)
    {
        temp = iNo3;
    }
    return temp;
    
}
int main()
{
    int i = 0, j = 0, k = 0, iRet = 0;

    cout<<"Enter First Integer Number :"<<"\n";
    cin>>i;

    cout<<"Enter Second Integer Number :"<<"\n";
    cin>>j;

    cout<<"Enter Third Integer Number :"<<"\n";
    cin>>k;

    iRet = FindMaximumNumber(i,j,k);
     cout<<"Maximum Integer Number is : "<<iRet<<"\n";


     float p = 0.0, q = 0.0, r = 0.0, fRet = 0.0;

    cout<<"Enter First Float  Number :"<<"\n";
    cin>>p;

    cout<<"Enter Second Float Number :"<<"\n";
    cin>>q;

    cout<<"Enter Third Float Number :"<<"\n";
    cin>>r;

    fRet = FindMaximumNumber(p,q,r);
     cout<<"Maximum Float Number  is : "<<fRet<<"\n";

    return 0;
}