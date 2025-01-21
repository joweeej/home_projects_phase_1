//Code illustrating virtual functions,pure virtual functions and abstract classes
#include<iostream>
#include<list>
using namespace std;

class Instrument{
public:
//pure function
virtual void MakeSound()= 0;
  
}
};

class Accordion:public Instrument{
void MakeSound(){
    cout<<"Accordion playing"<<endl;  
}
};

class Piano : public Instrument(){
void MakeSound(){
    cout<<"Piano playing"<<endl; 
};

int main()
{


Instrument* i1 = new Accordion;
i1->MakeSound();

Instrumen* i2 = new Piano;
i2->MakeSound();
    return 0;
   
   //An array of type  instrument pointer ;aan array of two  pointers i1 and i2 .Here you can make them all play at once.
    Instrument* instruments[2]={i1,i2};
    for(int i = 0; i<2; i++){
        instruments[i]->MakeSound();
    }

system("pause");

return 0;
}