#include <iostream>
using namespace std;

int main() {
  // Addition
  int number1{2};
  int number2{7};

  int result = number1 + number2;
  cout << "result : " << result << endl; // 9

  // Subtraction
  result = number2 - number1 ;
  cout << "result : " << result << endl; // 5

  result = number1 - number2;
  cout << "result : " << result << endl; // -5

  // Multiplication
  result = number1 * number2;
  cout << "result : " << result << endl; // 14

  // Division
  result = number2 / number1;
  cout << "result : " << result << endl; // 3

  // Modulus
  result = number2 % number1; // 7 % 2
  cout << "result : " << result << endl; // 1

  result = 31 % 10;
  cout << "result : " << result << endl; // 1
  
  return 0;
}


