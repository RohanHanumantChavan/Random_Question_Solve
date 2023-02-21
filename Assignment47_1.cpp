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
T Multiply(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1 * iNo2;
    return Ans;
}
int main()
{
    int i = 0, j = 0, iRet = 0;

    cout<<"Enter First Integer Number :"<<"\n";
    cin>>i;

    cout<<"Enter Second Integer Number :"<<"\n";
    cin>>j;

    iRet = Multiply(i,j);
     cout<<"Multiplication of Integer is : "<<iRet<<"\n";


     float p = 0.0, q = 0.0, fRet = 0.0;

    cout<<"Enter First Float  Number :"<<"\n";
    cin>>p;

    cout<<"Enter Second Float Number :"<<"\n";
    cin>>q;

    fRet = Multiply(p,q);
     cout<<"Multiplication of Float is : "<<fRet<<"\n";

    return 0;
}