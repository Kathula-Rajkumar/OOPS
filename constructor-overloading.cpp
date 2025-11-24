//constructor 0verloading chooses according to the object, if there exists two types of constructors...

#include <iostream>
using namespace std;

class Teacher{
public:
    Teacher(){
        dept = "Electrical";
    }
    
    string name;
    string subject;
    string dept;

    Teacher(string n, string sub, string dep){
        name = n;
        subject = sub;
        dept = dep;
    }

    void changeDept(string dep){
        dept = dep;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"dep: "<<dept<<endl;
    }
    
};

int main(){
    Teacher t1("Rajkumar", "Computer science", "chemical");
    t1.getInfo();

}