#include<iostream>
#include<list>
#include<string>
using namespace std;

class User{
public:
string FirstName;
string LastName;
int Age;
string Email;
//A default constructor- innitializes the properties of an object with default values.
//Characteristics of default constructors;
//1.They need to ve named afrter their class.
//2.They don't have a return type->Not even void.
//3.They need to be placed in the public area of the class.
//4.They dont have any parameters.
//5.If you don't create default constructors on your own Cpp will automatically generate one for you.
//6.Default constructors are involved automatically when you create an object of a class.
//When you create any sort of your own constuctor for a specific class you are going to lose the automatically generated constructor that Cpp gives you. You will not be able to use or access that constructor anymore as long as you have other constructors.User(){}

//You can solve this  issue by: creating your own default constructor
//Assigning values to be passed(parameters) by an object of that class that was created.

//Example of a default constructor.

//Parameterwise constructor
User(string fName,string lName, int age)
{
    FirstName = fName;
    LastName = lName;
    Age = age;
    Email = fName"."+lName+"@gmail.com";

}

};

 void GetUserInfo(User u)
{
cout<<u.FirstName<<endl;
cout<<u.LastName<<endl;
cout<<u.Age<<endl;
cout<<u.Email<<endl;
}
int main()
{

User user1("Saldina","Nurak",27);
User user2("Job","Andrew",27);
/*
User user1;
user1.FirstName="Saldina";
user1.LastName = "Jeruu";
user1.Age = 18;
user1.Email= "Saldinatext@gmail.com";
*/


GetUserInfo(user1);
GetUserInfo(user2);

//











    return 0;
}