#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i;i<=n;i++){
        for(int j;j<=m;j++){
            if(i==1 || j==1 || i==n ||j ==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
