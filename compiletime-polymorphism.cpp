/*
-> Polymorphism: Polymorphism means one name, many forms.

Compile-time polymorphism (2 types)

1. Constructor overloading
2. Funciton overloading

Same Class name for constructor with parameters and without parameters (constructor overloading)

Same function name → different parameters → different behavior (Function overloading)
*/



#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"Non - parameterized constructor\n";
    }

    Student(string name){
        this -> name = name;
        cout<<"Parameterized constructor\n";
    }
   
};

int main(){
    Student s1("Tony stark");
}





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <iostream>
#include <string>
using namespace std;

class Math{
public:
   void add(int a, int b){
     cout<< "Sum is : "<< a + b <<endl;
   }

   void add(double a, double b){
     cout<< "Sum is : "<< a + b <<endl;
   }

   void add(int a, int b, int c){
     cout<<"sum is: "<< a + b + c <<endl;
   }
};

int main(){
    Math m;
    m.add(2, 3);
    m.add(10.2, 11.7);
    m.add(1, 2, 3);

}