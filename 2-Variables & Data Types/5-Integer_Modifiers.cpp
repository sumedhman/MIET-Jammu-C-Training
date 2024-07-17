#include <iostream>
using namespace std;

int main() {

    signed int value1 {10};
    signed int value2 {-300};

    cout << "value1 : " << value1 << endl; // 10
    cout << "value2 : " << value2 << endl; // -300
    cout << "sizeof(value1) : " << sizeof(value1) << endl; // 4
    cout << "sizeof(value2) : " << sizeof(value2) << endl; // 4

    unsigned int value3 {4};
    //unsigned int value4{-5}; // Compiler error.

    //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; //  2 Bytes
    signed short signed_short {122}; // 2 Bytes
    signed short int signed_short_int {-456}; //  2 Bytes
    unsigned short int unsigned_short_int {456}; // 2 Bytes
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66}; // 4 bytes
    signed int signed_int {77}; // 4 bytes
    unsigned int unsigned_int{77}; // 4 bytes
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33}; // 4 OR 8 Bytes
    signed long signed_long {44}; // 4 OR 8 Bytes
    signed long int signed_long_int {44}; // 4 OR 8 Bytes
    unsigned long int unsigned_long_int{44}; // 4 OR 8 Bytes

    long long long_long {888}; // 8 Bytes
    long long int long_long_int {999}; // 8 Bytes
    signed long long signed_long_long {444}; // 8 Bytes
    signed long long int signed_long_long_int{1234}; // 8 Bytes
    unsigned long long int unsigned_long_long_int{1234}; // 8 Bytes


    cout << "Short variable : " << short_var<<  " , size : "
        << sizeof (short) << " bytes" << endl;

    cout << "Short Int : " << short_int << " , size : "
        << sizeof (short int) << " bytes" << endl;

    cout << "Signed short : " << signed_short
        << " , size : " << sizeof (signed short) << " bytes" << endl;

    cout << "Signed short int :  " << signed_short_int
        <<  " , size : " << sizeof (signed short int) << " bytes" << endl;
        
    cout << "unsigned short int :  " << unsigned_short_int
        <<  " , size : " << sizeof (unsigned short int) << " bytes" << endl;
        
    cout << "---------------------" << endl;




    cout << "Int variable :  " << int_var <<" , size : "
        << sizeof (int) << " bytes" << endl;

    cout << "Signed variable " << signed_var <<" , size : "
        << sizeof (signed) << " bytes" << endl;

    cout << "Signed int :  " << signed_int <<" , size : "
        << sizeof (signed int) << " bytes" << endl;
        
    cout << "unsigned int :  " << unsigned_int <<" , size : "
        << sizeof (unsigned int) << " bytes" << endl;
        
    cout << "---------------------" << endl;


    cout << "Long variable :  " << long_var << " , size : "
        << sizeof (long) << " bytes" <<endl;

    cout << "Long int :  " << long_int <<" , size : "
        << sizeof (long int) << " bytes" << endl;

    cout << "Signed long :  " << signed_long <<" , size : "
        << sizeof (signed long) << " bytes" << endl;

    cout << "Signed long int : " << signed_long_int <<" , size : "
        << sizeof (signed long int) << " bytes" << endl;
        
    cout << "unsigned long int : " << unsigned_long_int <<" , size : "
        << sizeof (unsigned long int) << " bytes" << endl;
        
    cout << "---------------------" << endl;



    cout << "Long long : " << long_long <<" , size : "
        << sizeof (long long) << " bytes" << endl;

    cout << "Long long int : " << long_long_int <<" , size : "
        << sizeof (long long int) << " bytes" << endl;

    cout << "Signed long long : " << signed_long_long <<" , size : "
        << sizeof (signed long long) << " bytes" << endl;
        
    cout << "Signed long long int : " << signed_long_long_int <<" , size : "
        << sizeof (signed long long int) << " bytes" << endl;
        
    cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
        << sizeof (unsigned long long int) << " bytes" << endl;
        
    cout << "---------------------" << endl;
   
    return 0;
}