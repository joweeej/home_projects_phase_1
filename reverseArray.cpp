#include<iostream>
#include<algorithm>
using namespace std;
void  reverseArr (int arr[],int size){
    //std::reverse is from the algorithm library.
    reverse(arr,arr + size);//first arg "arr"pointer to the beggining of the array.second arg "arr + size "pointer to one element past the end of the array
    // The name arr = memory adress of arr[0]
    //In C++ pointers can be incremented....so if arr is a pointer to arr[0],then arr+1 will point to arr[1]
}
int main (){
    

   int arr[]={1,2,3,4,5};
   int size = sizeof(arr)/ sizeof(arr[0]);//To find the size of the array.
    cout<<"Original array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    reverseArr(arr,size);
    cout<<"Reversed array :";
     
     for(int i=0 ; i< size;i++){
         cout<<arr[i]<<" ";
     }
    
    
    
    
    
    return 0;
}
