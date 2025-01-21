#include<iostream>
using namespace std;
int main()
{

int value =10;

int num;
while (1){


cout<<"Enter a value you think is correct : ";
cin>>num;

if(num == value)
{
    cout<<"The value entered is correct ! ";
    break;
}
else{
    cout<<"Sorry! The value you entered is wrong!";
}
}




    return 0;
}
