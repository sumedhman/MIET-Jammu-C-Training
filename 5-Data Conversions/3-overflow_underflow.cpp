#include <iostream>
using namespace std;

int main() {
    //Overflow 
    unsigned char data {250};

    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 251

    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 252

    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 253

    ++data;
    cout << "data : " << static_cast<int>(data) << endl; //254

    ++data; 
    cout << "data : " << hex <<  static_cast<int>(data) << endl; // ff

    ++data;  // Overflow
    cout << "data : " << static_cast<int>(data) << endl; // 0

    cout << dec; // O/p to be shown in decimal base (radix 10)

    data = 1;

    --data;
    cout << "data : " << static_cast<int>(data) << endl; // 0

    --data;
    cout << "data : " << static_cast<int>(data) << endl; // 255

    return 0;
}

