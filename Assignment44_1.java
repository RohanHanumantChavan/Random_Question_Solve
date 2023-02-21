/*

input :  b  N  j  B  R  b  A  d  G  G

Output : b       n       j       b       r       b       a       d       g       g

*/                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Write Program java Program Accept character Array from User And Change Case Upper to Lower
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
    public void ChangeCapitalCharacterInSmall(char Crr[])
    {
        int iCnt = 0;
        int iCount = 0;
        for(iCnt = 0; iCnt < Crr.length; iCnt++)
        {
          
           if(Character.isUpperCase(Crr[iCnt]))
            {
                  Crr[iCnt] = Character.toLowerCase(Crr[iCnt]);
            }
            System.out.print(Crr[iCnt]+"\t");
        }
        
    }
    
   
}

class Assignment44_1
{
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the Character of Array : ");
        char Arr[] = sobj.next().toCharArray();
       

        ArrayX obj = new ArrayX();
     obj.ChangeCapitalCharacterInSmall(Arr);
       

        

       
         
        
    }
}