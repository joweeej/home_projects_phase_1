#include<iostream>
using namespace std;

int swap (int a, int b){

    int temp = a ;
    a = b;
    return temp , b;

}

int main()
{

cout<<"Enter the first value; "<<endl;
int val1 ;
cin>> val1;
int val2;
cout<<"Enter second value; "<<endl;

int answer = swap(val1,val2);

cout<<"val1  and val2 are "<<answer <<"respectively"<<endl;




return 0;
}