#include <iostream>
using namespace std;


class Teacher{
private: 
    string dept;

public:
     
     Teacher(){
        dept = "Electronics";
     }
   
    string name;
    string subject;

    void changeDept(string dep){
        dept = dep;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Dept: "<<dept<<endl;

    }

};

int main(){
   Teacher t1;
   t1.name ="Rajkumar";
   t1.subject = "Computer science";
   t1.changeDept("computer Networks");
   t1.getInfo();
}