//constructor(this) : this is a special pointer in cpp that points to the current object.

#include <iostream>
using namespace std;

class Teacher{
public:
    string name;
    string subject;
    string dept;

    Teacher(){
        dept = "Computer science";
    }
    
    Teacher(string name, string subject){
            this ->name = name;  //this -> name (oject name)    =  name (constructor paramater name)
            this ->subject = subject;
    }

    void changeDept(string dep){
             dept = dep;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
    }

};

int main(){
    Teacher t1("Arun", "Maths");
    t1.getInfo();
    return 0;
}