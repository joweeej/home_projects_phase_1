#include<iosteam>
#include<list>
using namespace std;

//std error,--System.err.


class SmartPhone{
    public:
    virtual void TakeASelfie()=0;
    virtual void MakeACall()=0;
};

class Android: public SmartPhone {
public:
void TakeSASelfie(){
    cout<<"Android selfie"<<endl;
}
void MakeACall(){
    cout<<"Android Calling"<<endl;
}
};

class Iphone: public SmartPhone{
void TakeASelfie(){
    cout<<"Iphone Selfie"<<endl;
}
void MakeACall(){
    cout<<"Iphone Calling"<<endl;
}
};

//Abstraction - hiding complex details behind simple procedure
int main()
{

   
//SmartPhone* s1 = new Android();
//s1->TakeASelfie;

Smartphone* s1 = new Iphone();
s1->TakeASelfie();
 s1->MakeACall();









    return 0;
}