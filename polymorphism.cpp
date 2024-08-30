#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;

    Student(){
        cout<<"non-paarameterized\n";
    }
    Student(string name){
        this->name = name;
        cout<<"parameterized\n";
    }

};
int main(){
    Student ("tony starck");
    return 0;
};