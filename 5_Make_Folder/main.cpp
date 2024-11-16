/*
Given class Triangle (in files Triangle.h and Triangle.cpp), complete main() to read and set the base and height of triangle1 and of triangle2, determine which triangle's area is smaller, and output that triangle's info, making use of Triangle's relevant member functions.

Ex: If the input is:

3.0 4.0
4.0 5.0
where 3.0 is triangle1's base, 4.0 is triangle1's height, 4.0 is triangle2's base, and 5.0 is triangle2's height, the output is:

Triangle with smaller area:
Base: 3.00
Height: 4.00
Area: 6.00
*/

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   // Declare variables
   Triangle triangle1;
   Triangle triangle2;
   double userBaseIn;
   double userHeightIn;

   // Read and set base and height for triangle1 (use SetBase() and SetHeight())
   // Get inputs
   cout << "Enter the base of the first triangle:" << endl;
   cin >> userBaseIn;
   cout << "Enter the height of the first triangle:" << endl;
   cin >> userHeightIn;

   // Set values
   triangle1.SetBase(userBaseIn);
   triangle1.SetHeight(userHeightIn);
      
   //Read and set base and height for triangle2 (use SetBase() and SetHeight())
   // Get inputs
   cout << "Enter the base of the second triangle:" << endl;
   cin >> userBaseIn;
   cout << "Enter the height of the second triangle:" << endl;
   cin >> userHeightIn;

   // Set values
   triangle2.SetBase(userBaseIn);
   triangle2.SetHeight(userHeightIn);
       
   cout << "Triangle with smaller area:" << endl;
   
   // Determine smaller triangle
   if (triangle1.GetArea() < triangle2.GetArea()) {  // Triangle 1 is smaller
      triangle1.PrintInfo();  // Print triangle1 info
   }
   else {  // Triangle 2 is smaller
      triangle2.PrintInfo();  // Print triangle2 info
   }
   
   return 0;
}