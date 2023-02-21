/*


*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array And Perform the Operation
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 8/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int Value = 10)
    {
        cout<<"Inside Contructor "<<"\n";
        this->iSize = Value;
        this->Arr = new int[iSize];
    }
    ~ArrayX()
    {
        cout<<"Inside destructor "<<"\n";
        delete []Arr;
    }

    void Accept();
    void Display();
};
void ArrayX::Accept()
{
    cout<<"Please Enter "<<iSize<<" Elements of Array "<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter "<<(iCnt+1)<<" nd Element"<<"\n";
        cin>>Arr[iCnt];
    }

}
void ArrayX::Display()
{
    cout<<" Elements of Array Are :"<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
       cout<<Arr[iCnt]<<"\t";
    }
cout<<"\n";



}
class ArraySearch : public ArrayX
{
    public:
    ArraySearch(int no):ArrayX(no)
    {
        

    }

    int Frequency(int iValue);
    int SearchFirst(int iValue);
};
 int ArraySearch::Frequency(int iValue)
 {
    int i = 0;
    int iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            iCnt++;
        }

    }
    return iCnt;

 }
int ArraySearch::SearchFirst(int iValue)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            break;
        }

    }
    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int main()
{
    cout<<"Inside main Function "<<"\n";
    int iSize = 0;

    cout<<"Enter the Size of Array "<<"\n";
    cin>>iSize;
    
    ArraySearch sobj(iSize);
    sobj.Accept();
    sobj.Display();


    int iRet = sobj.Frequency(11);
    cout<<"Frequency of Number is : "<<iRet<<"\n";

    iRet = sobj.SearchFirst(11);
    cout<<"First Occurances of Number is : "<<iRet<<"\n";


    return 0;
}