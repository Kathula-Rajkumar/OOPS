/*
        Person
       /     \
  Student   Teacher    ← Hierarchical inheritance
       \     /
        TA              ← Multiple inheritance

*/

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
   string name;
   int age;
};

class Student : virtual public Person{
public:
   int rollNo;
};

class Teacher : virtual public Person{
public:
     string subject;
};

class TA : public Student, public Teacher{
public:

void getInfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollNo<<endl;
    cout<<subject<<endl;
}
   
};

int main(){
    TA s1;
    s1.name = "Rajkumar";
    s1.age = 22;
    s1.rollNo = 12345;
    s1.subject = "Computer science";

    s1.getInfo();
    


    return 0;
}