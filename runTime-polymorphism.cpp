/*
Run Time polymorphism: (Funtion overriding ) think of inheritance...

Note : Parent and child both contain the same function with different implementation

parent class function is said to be overridden

1. Function overriding
2. Virtual functions

2.(Virtual functions)

-> Virtual functions are dynamic in nature
-> Defined by keyword virtual
-> only written in base class and overridden in child class (shoud not mention virtual in child class)
-> virtual function is called during Runtime


*/

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    void getInfo(){
        cout<<"Parent class..\n";
    }
};

class Person : public Student{
public:
    void getInfo(){
        cout<<"Child class..\n";
    }
};

int main(){
    Person p1;
    p1.getInfo(); // overrides and prints Child class..

}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    void getInfo(){
        cout<<"Parent class...\n";
    }

    virtual void hello(){
        cout<<"Hello from parent class...\n";
    }
};

class Person : public Student {
public:
    void getInfo(){
        cout<<"Child class...\n";
    }

    void hello(){
        cout<<"Hello Child class...\n";
    }
};

int main(){
    Person p1;
    p1.hello();
}