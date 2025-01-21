#incude<iostream>
using namespace std;
int main(){
int size;
//Getting size of array from Use
cout<<"Enter the size of the ASrray: ";
cin>>size;
//Dynamically Allocating memory for the array
int* arr = new int[size];//The new operator is used to allocate memory dynamically.

//Assigning values to the Array
for(int i =#include<iostream>
using namespace std;
int main(){
int size;
//Getting size of array from Use
cout<<"Enter the size of the Array: ";
cin>>size;
//Dynamically Allocating memory for the array
int* arr = new int[size];//The new operator is used to allocate memory dynamically.

//Assigning values to the Array
for(int i = 0;i<size;++i){
    arr[i]=i + 5;

}
//Print the Array Elements
cout<<"Array Elements: "<<endl;
for(int i = 0; i<size;++i){
    cout<<arr[i]<<" ";
}
cout<< endl;

//Deallocate the Dynamically Allocated Memory
delete[] arr;//deletes memory that was dynamically allocated for the array back to the system...does not affect the program's output that has already occured.



    return 0;
}
 0;i<size;++i){
    arr[i]=i + 5;

}
//Print the Array Elements
cout<<"Array Elements: "<<endl;
for(int i = 0; i<size;++i){
    cout<<arr[i]<<" ";
}
cout<< endl;

//Deallocate the Dynamically Allocated Memory
delete[] arr;//deletes memory that was dynamically allocated for the array back to the system...does not affect the program's output that has already occured.



    return 0;
}
