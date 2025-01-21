#include<iostream>//Constructor is a special method that is called when a class object is created automatically
using namespace std;
class myClass{
    public:
    myClass(){
        cout<<"Hello World!!";
    }
    
};
int main()
{
    
    
myClass myObj;//Creates an object--This will automatically call the Constructor.
    
    
    
    return 0;
}