#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i;i<=n;i++){
        for(int j;j<=(n-1);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}