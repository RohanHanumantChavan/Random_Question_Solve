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
void Display(T Value, int iSize)
{
   
    for(int iCnt = 1; iCnt <=iSize; iCnt++)
    {
       cout<<Value<<"\t";
    }
    cout<<"\n";
    
    
}
int main()
{
   Display('M',7);
   Display(11,3);
   Display(3.7,6);

    return 0;
}