#include <iostream>
using namespace std;

// Tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int main(){
    int tool {Eraser};

    if (tool == Pen) {
        cout << "Active tool is pen" << endl;
        //Do the actual painting
    }
    else if (tool == Marker) {
        cout << "Active tool is Marker" << endl;
    }
    else if (tool == Eraser) {
        cout << "Active tool is Eraser" << endl;
    }
    else if (tool == Rectangle) {
        cout << "Active tool is Rectangle" << endl;
    }
    else if (tool == Circle) {
        cout << "Active tool is Circle" << endl;
    }
    else if (tool == Ellipse) {
        cout << "Active tool is Ellipse" << endl;
    }

    cout << "Moving on" << endl;
    
    return 0;
}

