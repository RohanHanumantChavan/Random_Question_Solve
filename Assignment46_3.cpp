/*



*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept Array From user and Display Pattern
//                        
//    Input : Integer
//    Output : Pattern
//    Author : Rohan Hanumant Chavan
//    Date : 7/1/2023
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
    int SearchLast(int iValue);
    int CountEven();
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
int ArraySearch::SearchLast(int iValue)
{
     int i = 0;
     int iPos = -1;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            iPos = i;
        }

    }
    if(iPos == -1)
    {
        return -1;
    }
    else
    {
        return iPos;
    }

}
int ArraySearch:: CountEven()
{
    int i = 0;
    int iCount = 0;
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCount++;
        }
        
    }
    return iCount;
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

     iRet = sobj.SearchLast(11);
    cout<<"Last Occurances of Number is : "<<iRet<<"\n";

    iRet = sobj.CountEven();
    cout<<"Count of Even Number is : "<<iRet<<"\n";


    return 0;
}