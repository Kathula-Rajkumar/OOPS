//Destructor : Destructor is complete opposite to constructor. In constructor it allocates memory but the destructor work is to deallocate the memory.

#include <iostream>
#include <string>
using namespace std;

class Student{
public: 
    
    string name;
    double* cgpaPtr;
   
    Student(string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student(){//Destructor... and destructor calls automatically when main was finished
        cout<<"Iam destructor and i delete everthing"<<endl;
        delete cgpaPtr;//memory leak , destructor fress memory
    }
    void getInfo(){
        cout<<"Name: "<< name<< endl;
        cout<<"Cgpa: " << *cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Rajkumar", 8.74);
    s1.getInfo();

}