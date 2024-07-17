#include <iostream>
using namespace std;

int main() {
    int number1 {20};
    int number2 {20};
	
    cout << "number1 : " << number1 << endl; // 20
    cout << "number2 : " << number2 << endl; // 20
	
    cout << endl;
    cout << "Comparing variables" << endl;
	
    cout << boolalpha ; // Make bool show up as true/false instead of 1/0
    // Stress the need for parentheses here
    cout << "number1 < number2 : " << (number1 < number2) << endl; // false
    cout << "number1 <= number2 : " << (number1 <= number2) << endl; // true
    cout << "number1 > number2 : " << (number1 > number2) << endl; // false
    cout << "number1 >= number2 : " << (number1 >= number2) << endl; // true
    cout << "number1 == number2 : " << (number1 == number2) << endl; // true
    cout << "number1 != number2 : " << (number1 != number2) << endl; // false

    cout << endl;
    cout << "store comparison result and use it later" << endl;
	
    bool result = (number1 == number2);
    
    cout <<  number1 << " == " << number2 << " : " 
                     << result <<  endl; // 20 == 20 : true

    return 0;
}

