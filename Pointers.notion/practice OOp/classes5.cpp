#include<iostream>
using namespace std;
class Car{
    public:
string colour;
string type;
void fullfillment();
    
};
void Car::fullfillment(){
    cout<<"Your Dream Shall Come True!"<<endl;
}
int main(){
 Car obj1;
 obj1.colour = "Pink";
 obj1.type = "Toyota Jeep!";
 cout<<obj1.colour<<endl;
 cout<<obj1.type<<endl;
 obj1.fullfillment();
    

    
    return 0;
}