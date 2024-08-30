#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i;i<=n;i++){
        for(int j;j<=n;j++){
            cout<<j;
        }
        for(int j;j<=(i-1);j++){
            cout<<j;
        }
        
        cout<<endl;
    }
    
    return 0;
}