#include<iostream>
using namespace std;
class Vehicle{
    public:
    string brand;
    string colour;
    void honk(){
        cout<<"Peep!Peep!Peep!"<<endl;
        
    }
};
class Car:public Vehicle{
    string model = "Mustang";
};

int main(){
Car obj1;
obj1.honk();
obj1.brand="Ford";
obj1.colour="Pink";

cout<<"Brand is "<<obj1.brand<<endl;
cout<<"color is "<<obj1.colour;

  
    return 0;
}