#include <iostream>
using namespace std;

int main() {
    int value {45};
    
    cout << "The value is : " << value << endl;
    
    value = value + 5;
    //value += 5; // equivalent to value = value + 5
    cout << "The value is (after +=5) : " << value << endl; // 50

    value -=5; // equivalent to value = value - 5
    cout << "The value is (after -=5) : " << value << endl; // 45 

    value *=2;
    cout << "The value is (after *=2) : " << value << endl; // 90

    value /= 3;
    cout << "The value is (after /=3) : " << value << endl; // 30

    value %= 11;
    cout << "The value is (after %=11) : " << value << endl;// 8
    return 0;
}

