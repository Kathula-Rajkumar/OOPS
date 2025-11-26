/*
Multiple inheritance:
->  child inherits two parents 
Student (rollNo, name) , Teacher (subject, salary) = 2 parents
TeachingAssitence = child inherits two parents
*/


#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    int age;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TeachingAssistence : public Student, public Teacher{
public:
     void getInfo(){
        cout<< name<<endl;
        cout<< age<<endl;
        cout<<salary<<endl;
     }
};

int main(){
    TeachingAssistence s1;
    s1.name = "Spiderman";
    s1.age = 25;
    s1.salary = 45000;
    s1.getInfo();
}

