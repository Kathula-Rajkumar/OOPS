//Setter : A function that sets (updates) the value of a private variable.
//Getter : A function that gets (reads) the value of a private variable.

#include <iostream>
using namespace std;


class Student{
private:
    int age ;
    string name;

public:
    //setter for age
    void setAge(int a){
         age = a;
    }

    //Getter for age 
    int getAge(){
        return age;
    }

   //setter for name
    void setName(string n){
        name = n;
    }
    
    //getter for name
    string getName(){
        return name;
    }
};

int main(){
    Student s;
    s.setName("Rajkumar");
    s.setAge(22);
    
    cout<<"Name: "<<s.getName()<< endl;
    cout<<"Age: "<<s.getAge()<<endl;

    return 0;

}


/*
output
Name: Rajkumar
Age: 22
*/