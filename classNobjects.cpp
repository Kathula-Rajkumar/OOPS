#include <iostream>
#include <string>
using namespace std;

class Car {
public: 
    string brand;
    string color;

    void start(){
        cout<<brand <<"is Starting"<<endl;
    }

};

int main(){
    Car car1;
    car1.brand = "BMW";
    car1.color = "RED";

    car1.start();
    return 0;
}