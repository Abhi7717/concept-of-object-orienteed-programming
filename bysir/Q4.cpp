#include <iostream>
using namespace std;
 
class modify {
   private:
      int a;             // 0 to infinite
      int b;           // 0 to 12
      
   public:
      // required constructors
      modify() {
         a = 0;
         b= 0;
      }
      modify(int f, int i) {
         a = f;
         b = i;
      }
      
      // overload function call
      modify operator()(int x, int y) {
         modify D;
         
         // just put random calculation
         D.a = a+x;
         D.b = b+y ;
         return D;
      }
      modify operator()() {
         modify D;
         
         // just put random calculation
         D.a = a*b;
        D.b = a/b ;
         return D;
      }
      
      // method to display distance
      void display() {
         cout <<  a <<" "<< b << endl;
      }   
};

int main() {
   modify D1(11, 10), D2;
cout << "previous input : "; 
   D1.display();

   D2 = D1.operator()(10,20); // invoke operator()
   cout << "modified input :"; 
   D2.display();
    D2 = D1.operator()(); // invoke operator()
   cout << "modified input :"; 
   D2.display();

   return 0;
}




// previous input : 11 10
// modified input :21 30 
// modified input :110 1