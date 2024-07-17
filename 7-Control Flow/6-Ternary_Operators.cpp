#include <iostream>
using namespace std;

int main(){
	int max{};
    
  int a{35};
  int b{200};
	
	cout << "using regular if " << endl;
	
  if(a >  b){
    max = a;
  }else{
    max = b;
  }

  max = (a > b)? a : b; // Ternary operator
	
  cout << "max : " << max << endl; // 200
	
  return 0;
}

