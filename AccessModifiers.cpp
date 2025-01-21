/*#include<iostream>
using namespace std;
int main()
{

//Access Modifiers
//1.Private->Not accessible outsie the class
//2.Public->Accessible outside your class
//3.Protected->Sommwhre In between private and public

//4  block builders of OOp;
//Encapsulation
//Inheritance
//Polymorphism
//Abstraction.  

Polymorphism is an important aspect when it comes to object oriented proramming
-//The ability of an object or method to have many forms.
//Same name with different implementations.  
*/
#include<iostream>
using namespace std;

int addNumbers(int num1,int num2){


 int sum = num1 + num2;
 return sum;

}
int main()
{

cout<<"Enter two numbers : "<<endl;
int a ;
int b ;
cin>>a>>b;

int result = addNumbers(a,b);
cout<<"The result is : "<<result;










 




    return 0;
}