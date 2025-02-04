#include<iostream>
#include<vector>
using namespace std;
int main(){
//Removing Elements from vectors

    
  vector<string> cars={"Volvo","Toyota","Mazda","Ford","BMW"};

   cars.pop_back();
   for(string car:cars){
       cout<<car<<endl;
   }
    
    
    
    
    return 0;
}