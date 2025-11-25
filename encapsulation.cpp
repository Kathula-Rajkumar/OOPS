/*
1. Encapsulation is wrapping data (variables) and functions into a single unit class.
2. Also restricts direct access to data using access Modidiers 
*/

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    void setAge(int a){
        if(a > 0) age = a;
    }

    int getAge(){
        return age;
    }

    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }

};

int main(){
    Student s1;
    s1.setName("Rajkumar");
    s1.setAge(23);

    cout<<"Name: "<<s1.getName() <<" "<<"Age is: "<< s1.getAge() <<endl;

}