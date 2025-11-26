/*
parent (Person) -> parent (Student) -> gradStudent = multilevel inheritance 
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

class GradStudent : public Student{
public:
      string researchArea;

      void getInfo(){
        cout<<name<<endl;
        cout<<researchArea<<endl;
        cout<<age<<endl;
      }
};

int main(){
    GradStudent s1;
    s1.name = "Spiderman";
    s1.researchArea = "Marvel";
    s1.age = 25;

    s1.getInfo();


}
