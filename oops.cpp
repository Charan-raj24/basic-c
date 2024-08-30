#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
 
    string name;
    string dept;
    string subject;
    double salary;

    
     

};
int main(){
    Teacher t1; //constructor call
    t1.name = "charan";
    t1.subject = "C+=";
    t1.dept = "Computer Science";
    t1.salary = 250000;
    cout<<t1.name <<endl;
    cout<<t1.salary<<endl;

    return 0;
}


 