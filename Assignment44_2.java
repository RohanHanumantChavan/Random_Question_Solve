/*

input :  b  N  e  B  R  b  A  i  G  i

Output : Count Of Vowel Character is : 4

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept character Array from User And Display Count of Vowel Character
//                        
//    Input : Integer
//    Output : Integer
//    Author : Rohan Hanumant Chavan
//    Date : 6/1/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class ArrayX
{
    public int CountOfVowelCharacter(char Arr[])
    {
        int i = 0;
        int iCount = 0;
        for(i = 0; i < Arr.length; i++)
        {
          
           if( Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u' || Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U')
            {
                iCount++;
            }
        }
        return iCount;
        
    }
    
   
}

class Assignment44_2
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the Character of Array : ");
        char Arr[] = sobj.next().toCharArray();
       

        ArrayX obj = new ArrayX();
     iRet = obj.CountOfVowelCharacter(Arr);
     System.out.println("Count Of Vowel Character is : "+iRet);
       

        

       
         
        
    }
}