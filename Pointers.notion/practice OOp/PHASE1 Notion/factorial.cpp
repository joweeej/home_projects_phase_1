#include<iostream>
using namespace std;
int factorial (int num)
{
    if(num == 0)
    {
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}
int main()
{


cout<<"Enter a value whose factorial you want calculated : ";
int val;
cin>>val;

int result = factorial(val);

cout<<"The factorial of "<<val<<" is "<<result;





    return 0;
}