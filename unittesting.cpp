#include<iostream>
using namespace std;


int sub(int x, int y){
   
   return (x-y);
}
// test function
bool test_sub(int a,int b,int c) {
 int a1 = a;
 int b1 = b ;
int exp_output = c;

int output = sub(a1,b1);
if (exp_output == output) {
return true;
}
return false;
}
int main(){
   //calling all test functions
   cout<<test_sub(1,0,1);
   cout<<test_sub(2,-2,4);
   cout<<test_sub(3,3,0);
   cout<<test_sub(4,9,-5);
   return 0;
}
