#include <iostream>
using namespace std;

int global_var1{23}; // global variable

void some_function() {
  int local_var{10};
  cout << "Inside function global_var : " << global_var1 << endl;
  cout << "Inside function local_var : " << local_var << endl;
}

void some_other_function() {
  //local_var = 5;
}

int main() {
  cout << "Inside main function global_var : " << global_var1 << endl; // 23
  //local_var = 5;
   
  return 0;
}

