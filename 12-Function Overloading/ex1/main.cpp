#include <iostream>
#include "index.h"
using namespace std;
int main() {
    index c;
	cout << "c = " << c.showdata(); //c = 0
	//c.increment();
	++c;  //c.operator++();
	cout << endl << "c = " << c.showdata(); //c = 1

    return 0;
}
