#include<iostream>
using namespace std;
class Car{
  public:
 string brand;
 string model;
 int year;
 Car(string x, string y,int z)//Constructor with parameters
 {
  brand = x;
  model = y;
  year = z;
     
 }
 
  
};
int main(){
    Car obj1("BMW","X4",2006);
    Car obj2("Ford","Mustang",1995);
    
  cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
  cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<endl;
    

 return 0;
}