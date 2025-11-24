/*
1.constructor : special method with the same name as class
2.no return type
3.runs automatically when object is created

*/

#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    
    //constructors are always in public, cause even if we cannot define this ? it automatically calls when a object is created in the main function...
    //non parameterized constructor
    Teacher(){
        dept = "Computer science";
    }
    string name;
    string dept;
    string subject;

    //void sets the function but not returns
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter for salary
    void setSalary( double s){
        salary = s;
    }

    //getter for salary
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1; 
    t1.name = "Rajkumar";
    t1.subject = "Cpp";
    //t1.salary = 3000;  we cannot acces salary directly because its private 
    t1.setSalary(25000);
    t1.getSalary();

   //if we wont change the dept by defaulty it chooses computer science, cause in the constructor we defined the dept as computer science
    t1.changeDept("computer networks");

    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    return 0;

}

/*
output 
25000
computer networks
'*/