#include <iostream>
using namespace std;
int main() {
   //Compile time error
   cout << "Hello World!" << var << endl;

   //Run time error
   int value = 7/0;
   cout << "value : " << value << endl;

    return 0;
}