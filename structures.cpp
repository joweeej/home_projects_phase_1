#include<iostream>
using namespace std;
//Structures->user -defined data types.

struct SmartPhone{
string name;
int storage space ;
string color;
double price;
};

struct Person{
string name;
int age;
SmartPhone smartphone;
};

void printSmartPhoneInfo(SmartPhone smartphone)
{
    cout<<"Name : "<<smartphone.name<<endl;
    cout<<"StorageSpace : "<<smartphone.storage<<endl;
    cout<<"Price "<<smartphone.price<<endl;
    cout<<"Color"<<smartphone.color<<endl; 
}

void printPersonInfo(Person person)
{
    cout<<"name : "<<person.name<<endl;
    cout<<"age : "<<person.age<<endl;
    printSmartPhoneInfo(person..smartphone)
}

int main(){

 string name = "Iphone 12";
 int storage = 32;
 string colour = "Pink";
 double  price = 199.99;



string name2 = "Samsung Galaxy S21";
 int storage2 = 64;
 string colour2 = "Grey";
 double  price2 = 298.99;
   
SmartPhone smartphone;
smartphone.name="Iphone 12";
smartphone.color="Pink";
smartphone.price =199.99;
smartphone.storage=64;

SmartPhone smartphone2;
smartphone2.name="Samsung Galaxy S21";
smartphone2.price=888.89;
smartphone2.color="Grey";
smartphone2.strorage= 64;



printSmartPhoneInfo(smartphone);
printSmartPhoneInfo(smartphone2);

Person p;
p.name =  "Saldina";
p.age = 26;
//p.smartphone = "Samsung Galaxy S21";
p.smartphone = smartphone;//You can also change the function .
printPersonInfo(p);




    return 0;
}