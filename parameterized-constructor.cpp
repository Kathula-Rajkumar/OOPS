#include <iostream>
using namespace std;


class Teacher{
public:
     
     Teacher(string n, string sub){
        name = n;
        subject = sub;
     }
   
    string name;
    string subject;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject is: "<<subject<<endl;
    }

};

int main(){
    Teacher t1("Rajkumar", "Computer science");
    t1.getInfo();
}