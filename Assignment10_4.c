//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 
// Output : 
//
// Input : 
// Output:  
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Temperature and Fahrenheit and convert it into celsius
//                        
//    Input : Float
//    Output : Float
//    Author : Rohan Hanumant Chavan
//    Date : 09/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   double FhtoCs(float fTemp)
   {
      double Celsius = 0.0;

      Celsius = ((fTemp - 32)*5)/9;


       return Celsius;

}
   int main()
   {
      float fValue = 0.0;
      double dRet = 0.0;

      printf("Enter Temperature in Faherenheit : \n");
      scanf("%d",&fValue);

      dRet = FhtoCs(fValue);

      printf("Temperature in celuis is :%lf",dRet);
      return 0;
   }