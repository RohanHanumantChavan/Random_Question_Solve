/*

input : Marvellous

Output : String is Vowel true
  
*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept String From User And Display String is Vowel or Not
//                        
//    Input : String
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 25/12/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class StringDemo
{
    public boolean CheckVowel(String s)
    {
        char Arr[] = s.toCharArray();
        int iCnt = 0;
        boolean bFlag = false;
        for(int i = 0; i < s.length(); i++ )
        {
            if( Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u' || Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U')
            {
                 bFlag = true;
            }
        }
        return bFlag;
        
    }

}

class Assignment31_4
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.CheckVowel(str);
        if(bRet == true)
        {
            System.out.println("String is Vowel "+bRet);
        }
        else
        {
            System.out.println("String is Not Vowel "+bRet);
        }
        




    }
}