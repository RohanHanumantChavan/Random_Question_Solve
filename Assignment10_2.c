//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// input : 5.3   9.78
// Output : :51.834000
//
// Input : 10.4  5.3
// Output:  55.120000
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application Name : Accept Width and Heigth from user and calculate its area 
//                        
//    Input : Float
//    Output : Float
//    Author : Rohan Hanumant Chavan
//    Date : 09/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   double FindRectangleArea(float fWidth, float fHeight)
   {
      double Area = 0.0f;

      Area = fWidth * fHeight;

      return Area;

}
   int main()
   {
      float fValue1 = 0.0f, fValue2 = 0.0f;
      double dRet = 0.0;

      printf("Enter Width : \n");
      scanf("%f",&fValue1);

      printf("Enter Height : \n");
      scanf("%f",&fValue2);
      dRet = FindRectangleArea(fValue1,fValue2);

      printf("Area of Rectangle is :%lf",dRet);
      return 0;
   }