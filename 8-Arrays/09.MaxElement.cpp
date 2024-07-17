//Given an array of integer,find the gretest/maximum element in an array.
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,5,10,15,7};
    int maxElement=a[0];
    for(int i=0;i<5;i++){
        if (a[i]>maxElement)
        {
            maxElement=a[i];
        }
        
    }
    cout<<"The maximum element is the array "<<maxElement;
    return 0;
}
