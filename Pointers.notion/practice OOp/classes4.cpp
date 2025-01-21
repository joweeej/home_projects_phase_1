#include<iostream>
using namespace std;
class myClass{
    public:
  void myFunction();
    
};
//method definition outside class
void myClass::myFunction(){
    cout<<"Hello World!";
}
int main(){
   myClass myObj;
   myObj.myFunction();
 
    
    return 0;
}