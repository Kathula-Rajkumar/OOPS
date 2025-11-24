#include <iostream>
using namespace std;

class Teacher{
public: 

  string name;
  string subject;
  double salary;

  Teacher(string name, string subject, double salary){
     this ->name = name;
     this ->subject = subject;
     this ->salary = salary;

  }
  Teacher(Teacher &orgObject){ // pass by reference
     cout<<"I am copy constructor..."<<endl;
     this ->name = orgObject.name;
     this ->subject = orgObject.subject;
     this ->salary = orgObject.salary;
     
  }

 void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary is: "<<salary<<endl;
 }


};

int main(){
    Teacher t1("Rajkumar", "Computer science", 25000);
    Teacher t2(t1);//custom copy constructor
    t2.getInfo();
}