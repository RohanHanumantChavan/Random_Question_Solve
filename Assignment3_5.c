
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    follow the below step
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// local variable creation
// we can use storage class 
// use static memory allocation
// use if else condition
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////7
// step1: understand the problem stement
// step2: write the algorithm
// step3: deside the programming languge(c,c++,java)
// step4: write the program
// step5: test the program
//////////////////////////////////////////////////////////////////////////////77

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  problem statement : Accept number from user and and print even factor number
//  input = A
//  output = it is vowel
//
//   input = d
//   output = it is not vowel
//
//    input = E
//    output = it is Vowel
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Agorithm
START
Accept the character from user using scanf
pass the character to funtioncall
check the character is vowel or not
if character is vowel then print its vowel
and character is not vowel thent print it is not vowel
END
*/


#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application name : Accept the character from user and check this character vowel or not
//   Input: character
//   Output: check character vowel or not 
//   Author: Rohan Hanumant Chavan
//   Date :  25/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 BOOL CheckVowel(char CValue)
 {
   if(CValue == 'a'|| CValue == 'A'|| CValue == 'e'|| CValue == 'E'|| CValue == 'i'|| CValue == 'I'|| CValue == 'o'|| CValue == 'O'|| CValue =='u'|| CValue == 'U')
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
 }
 int main()
 {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");

    scanf("%c",&cValue);

    bRet =  CheckVowel(cValue);
    if(bRet == TRUE)
    {
      printf("it is Vowel\n");
    }
    else
    {
      printf("it is not Vowel\n");
    }

    return 0;
 }