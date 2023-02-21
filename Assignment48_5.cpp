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
void DisplayReverse(T *Arr, int iSize)
{
   cout<<"Array Display Reverse Format : "<<"\n"; 
    for(int iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout<<Arr[iCnt]<<"\t";
    }
   
    
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

     cout<<"Elements of Array are "<<"\n"; 
    for(int iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
   

    DisplayReverse(Arr,9);

   
     


    
   

    return 0;
}