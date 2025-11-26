/*
Hierarchial inheritance: Because multiple child classes inherit from the same parent class.

Note: here the main parent class is Person...
*/

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
   int rollNo;
};

class Teacher : public Person {
public: 
    string subject;
};


int main(){
   Teacher s1;
   s1.name = "Tony stark ";
   s1.age = 55;
   s1.subject ="marvel ";

   cout<<s1.name << s1.age << s1.subject <<endl;
}

