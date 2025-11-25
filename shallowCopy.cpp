//Shallow copy: A shallow copy of an object copies all of the member values from one object to another

#include <iostream>
#include <string>
using namespace std;


class Student{
public: 
   string name;
   double* cgpaPtr;  //firstly it is pointing to nothing

 Student(string name, double cgpa){
    this-> name = name;
    cgpaPtr = new double;   //here we pointed to double type ka memory meh..(under heap) which is dynamically allocated
    *cgpaPtr = cgpa; //deferenced and pointed towards cgpa
 }


//copy constructor
  Student(Student &obj){
    this -> name = obj.name;
    this ->cgpaPtr = obj.cgpaPtr;
 }

 void getInfo(){
    cout<<"Name: "<< name<<endl;
    cout<<"Cgpa: "<< *cgpaPtr<<endl; //we mention dereference pointer like this

 }

};

int main(){
    Student s1("Rajkumar", 8.0);
    Student s2(s1); //second student lets say Arun

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2; //dereference call
    s1.getInfo();
    return 0;
}


/*
output

Name: Rajkumar
Cgpa: 8
Name: Rajkumar
Cgpa: 9.2 

Note: shallow copy copies whole object structure or member values... s1 -> s2 any change reflects change in both...

*/