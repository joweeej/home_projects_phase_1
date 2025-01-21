#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter the size of the array you want: "<<endl
cin>>size

int* arr = new int[size];

for(int i = 0;i<size;++i){

   arr[i]=i+2; 
}

//printing the elements of the array itself
cout<<"Array is:";
for(int i=0;i<size;++i){
    cout<<arr[i]<<" ";

}


    return 0;
}