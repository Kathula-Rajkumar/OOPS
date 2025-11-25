//A deep copy, on the other hand , not only copies the member values but also makes copies of any dynamically allocated memory that the members point to...

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

    Student(Student &obj){
        this -> name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout<< "Name: "<< name<<endl;
        cout<< "Cgpa: "<< *cgpaPtr<<endl;

    }
};

int main(){
    Student s1("Rajkumar", 8.4);
    Student s2(s1);

    *(s2.cgpaPtr) = 9.2;
    s2.name = "Arun";

    s1.getInfo();
    s2.getInfo();


}