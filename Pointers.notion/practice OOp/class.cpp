#include<iostream>
using namespace std;
class myClass{
    public:
    int myNumb;
    string myString;
};
int main(){
  myClass myObj;
  myObj.myNumb = 2;
  myObj.myString ="Hello World!";
  
    cout<<myObj.myNumb<<endl;
    cout<<myObj.myString;

    
    return 0;
}