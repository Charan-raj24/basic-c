#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2, float num3){
    float sum=num1+num2+num3;
    return sum;
}


int main(){
    cout<<add(2.3, 1.4)<<endl;
    return 0;
}