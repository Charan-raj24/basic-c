#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    //parameterized
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    //copy constructor
    Teacher(Teacher &orgObj){
        cout<<"I am a custom copy constructor.../n ";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;

    }
 
    void changeDept(string newDept){
        dept = newDept;
    }
    void getInfo(){
        cout<<"name"<<name<<endl;
        cout<<"subject"<<subject<<endl;
    }


};
int main(){
    Teacher t1("Charan", "ComputerScience", "C++", 25000);
    //t1.getInfo();
    Teacher t2(t1); //custom copy constructor - invoke
    t2.getInfo();
    
    return 0;
}


 