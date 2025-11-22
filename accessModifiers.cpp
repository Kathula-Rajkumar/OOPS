#include <iostream>
using namespace std;

class Person{
private: 
     int age; //cannot access directly from outside

protected:
    string address; // protected can be accessed by child class

public:
    string name; //accessed anywhere

   //public function can access private and protected
    void setDetails(int a, string addr, string n){
        age = a;
        address = addr;
        name = n; 
    }

    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }

};

//child class inherits protected
class Student : public Person{
public:
     void showAddressFromChild(){
          cout<<"Address protected where child can access it: "<<address<<endl;
     }

};

int main(){
    Student s;
    s.name = " Rajkumar";

    //private and protected are cannot be accessed directly
    //s.age = 22;
    //s.adddress = "Huzurabad"

    s.setDetails(22, "Huzurabad", "Rajkumar");
    s.showDetails();
    s.showAddressFromChild();
}


/*

output
Name: Rajkumar
Age: 22
Address: Huzurabad
Address protected where child can access it: Huzurabad

*/