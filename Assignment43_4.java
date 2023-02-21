/*

input :  67.3   45.8    88.9     77.5    55.2

Output : 
67.3   Student is First Class
45.8   Student is Pass
88.9   Student is First Class with Distinction
77.5   Student is First Class with Distinction
55.2   Student is Second Class

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
    public void DisplayPercentagesinClass(float Arr[])
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
                
             if(Arr[iCnt] < 35)
            {
            System.out.println(+Arr[iCnt]+"   Student is Fail");
           
            }

            if((Arr[iCnt] >= 35) && (Arr[iCnt] < 50))
            {
            System.out.println(+Arr[iCnt]+"   Student is Pass");
            
            }


             if((Arr[iCnt] >= 50) && (Arr[iCnt] < 60))
             {
            System.out.println(+Arr[iCnt]+"   Student is Second Class");
            
            }

            if((Arr[iCnt] >= 60) && (Arr[iCnt] < 70))
            {
            System.out.println(+Arr[iCnt]+"   Student is First Class");
           
            }

             if((Arr[iCnt] >= 70) && (Arr[iCnt] < 100))
             {

            System.out.println(+Arr[iCnt]+"   Student is First Class with Distinction");
            

            }
        }
       
    }   
   
}

class Assignment43_4
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter Size Of Float Array : ");
        int iSize = sobj.nextInt();
         
         float Arr[] = new float[iSize];
        System.out.println("Please Enter "+Arr.length+"  Float Elements :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Plaese Enter "+(iCnt+1)+" nd Element ");
            Arr[iCnt] = sobj.nextFloat();
        }

        ArrayX obj = new ArrayX();
        obj. DisplayPercentagesinClass(Arr);


       

        

       
         
        
    }
}