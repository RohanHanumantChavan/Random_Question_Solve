/*

input :  b  N  j  B  R  b  A  d  G  G

Output : Count of Capital Character is : 6

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept character Array From User and Return Count of Capital Character 
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
    public int CountCapitalCharacter(char Crr[])
    {
        int iCnt = 0;
        int iCount = 0;
        for(iCnt = 0; iCnt < Crr.length; iCnt++)
        {
            if((Crr[iCnt] >= 'A') && (Crr[iCnt] <= 'Z'))
            {
                  iCount++;
            }
        }
        return iCount;
    }
    
   
}

class Assignment43_3
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the Character of Array : ");
        char Arr[] = sobj.next().toCharArray();
       

        ArrayX obj = new ArrayX();
     iRet = obj.CountCapitalCharacter(Arr);
        System.out.println("Count of Capital Character is : "+iRet);

        

       
         
        
    }
}