#include<iostream>
using namespace std;
int main(){


int numbers [] = {10,20,30,40,50};
int *ptr = numbers;//pointer to first element of the array

cout<<"Value of ptr: "<<*ptr<<endl;
//Pointer Arithmetic:Increamenting the pointer
ptr++;
cout<<"Value of *ptr after increamenting: "<<*ptr<<endl;
//Pointer Arithmetic: decreamenting the pointer
ptr--;
cout<<"Value of ptr after decreamenting: "<<*ptr<<endl;
//Arithmetic:Accessing elements using pointer Arithmrtic
cout<<"Value of (*ptr + 2):"<<*(ptr+2)<<endl;

//Pointer Arithmetic:Calculating the difference between two pointers
int *ptr2 = &numbers[3];
cout<<"The difference between ptr and ptr2 is "<<ptr2 - ptr<<endl;




    return 0;
}