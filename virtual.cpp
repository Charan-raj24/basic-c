#include<iostream>
#include<string>
using namespace std;
class Parent{
public:
    void getInfo () {
        cout<<"parent class\n";
    }
virtual void hello(){
        cout<<"hello froom parent\n";
    }


        
};
class Child : public Parent{
    public:
    void getInfo(){
        cout<<"Child class\n";
    }
    void hello(){
        cout<<"hello froom child\n";
    }
};

int main(){
     Child c1;
     c1.hello();
    return 0;


}
