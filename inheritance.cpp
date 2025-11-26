/*
1.Inheritance: when properties and member functions of base class are passed on to the derived class (code reusability)
2.Derived class means coming from top clas a - class b called (Derived class)

or

Inheritance: when properties and member functions of base class which is parent class(class A) are passed to the derived class (class B) 

Note : if base class is private nothing can be inherited
*/
#include <iostream>
using namespace std;


class Person{
public:
   string name;
   int age;

   Person(string name, int age){
      this -> name = name;
      this -> age = age;
   }

};

class Student : public Person{
public:
   
   int rollNo;
   
   Student(string name, int age, int rollNo) : Person (name, age){
       this -> rollNo = rollNo;
   }

   void getInfo(){
      cout<< "Name: "<< name<<endl;
      cout<< "Age: "<< age<< endl;
      cout<<"Roll no: "<< rollNo<<endl;
   }
};

int main(){
    Student s1("Rajkumar", 22, 12345);
    
    s1.getInfo();
}