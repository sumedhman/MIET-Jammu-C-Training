void swap(int,int);//function prototype
int main(){

    int a=10,
    int b=20;
    printf("before swap a=%d,b=%d",a,b)
    swap(a,b)
    return 0;

}
void swap (int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}