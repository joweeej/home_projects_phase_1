#include<iostream>
using namespace std;
int findMax(int arr[], int size){
    int max = arr[0];
    //looping through to find max value
for(int i = 1;i< size; i++){
if (arr[i]> max){
    max = arr[i];

}

}

return max;

}
int main ()
{

int arr[] = {10, 9, 8, 13, 12, 20};
int size = sizeof(arr)/sizeof(arr[0]);


int maxValue = findMax(arr,size);
cout<<"The maximum value in the array is "<<maxValue<<endl;






    return 0;
}