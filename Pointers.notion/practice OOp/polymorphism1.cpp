// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
    class AnimalSound{
      public:
      void makeSound(){
          cout<<"An animal will make a sound "<<endl;
      }
    };
    class Cow:public AnimalSound{
      public:
     void makeSound(){
          cout<<"The cow will moow moow moow!!!"<<endl;
      }
    };
    
    class dog:public AnimalSound{
        public:
       void makeSound(){
            cout<<"The dog will Bark Bark Bark!!!"<<endl;
        }
    };
int main() {
   Cow myCow;
   dog myDog;
   AnimalSound sound;
   
   myCow.makeSound();
   myDog.makeSound();
  sound.makeSound();
   
   

    return 0;
}