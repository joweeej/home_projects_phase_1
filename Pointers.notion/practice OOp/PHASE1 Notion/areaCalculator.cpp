#include<iostream>
using namespace std;
int area(int a , int b){

    int area = a *b;
    return area;

}
int main()
{



   cout<<"Enter the width "<<endl;
   int val1, val2;
    cin>>val1;
    cout<<"Enter the length ";
    cin>>val2;


   int result = area(val1,val2);

cout<<"The area is "<<result;


    return 0;
}