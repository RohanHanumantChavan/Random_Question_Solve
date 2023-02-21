/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//step to follow while programming
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//step1. understand the problem statement
//step2. Write the algorithm
//step3.Deside the programming languge
// step4.Write the program
//step5.test the program


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// problem statement : print 5 to 1 number on Screen
//input  : 5 to 1  Display 
//output : Display the 5 to 1 number on screen 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Start
 print on screen 5 to 1 number
using for loop display the 5 to 1 number on screen
using Display function 
Display the output on screen 5 to 1 number
End
*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : display the 5 to 1 number on screen
//    Description :    using for loop display print 5 to 1 number 
//    Input :         Integer
//    Output :        Display the 5 to 1 number
//    Author :        Rohan Hanumant Chavan
//    Date :          23/10/2022
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;

for( int i = 5; i >= 1; i--)
    {
        printf("%d\n",i);
    }
}
int main()
{
    Display();
    return 0;
}