#include<iostream>
using namespace std;


int sub(int x, int y){
   
   return (x-y);
}

struct test_case {
   int a;
   int b; 
   int exp; // a - b
};
t = struct test_case [   
  (1, 0, 1),
  (2,-2, 4),
  (3, 3, 0),
  (4, 9,-5),
];

void test_sub() {
   //calling all test functions
   for test in t {
      int output = sub(t.a, t.b);
      if (t.exp == output) {
         cout<<t.a<<" - "<<t.b<< " "<< "got " << output << " != "<< t.exp;
      }
   }
}
int main(){
   test_sub();
   return 0;
}
