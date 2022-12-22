#include <iostream>
#include<conio.h>

using namespace std;

// Function for Exception Thrown

void exceptionFunction() {
   // try block - inside Function
   try {
      //throw exception : In function
      throw 0;
   } catch (int i) {
      cout << "\nIn Function : Wrong Input :" << i;
      //re throw exception : out of the function
      throw;
   }
}

int main() {
   int var = 0;

   cout << "Simple C++ Program for Rethrowing Exception Handling : In Function\n";
   // try block - for exception code
   try {
      // Inside try block
      exceptionFunction();
   }// catch block
   catch (int ex) {
      // Code executed when exception caught
      cout << "\nIn Main : Wrong Input :" << ex;
   }

   getch();
   return 0;
}