#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>18){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Child"<<endl;
    }

    age>18 ? cout<<"Adult"<<endl : cout<<"Child"<<endl;
    return 0;
}