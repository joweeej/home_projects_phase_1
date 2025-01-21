#include<iostream>

using namespace std;



int gcd(int a, int b)
{
if(a == 0)
return b;
  else if(b==0){
    return a;
  }
     else if(a==b){
        return a;
     }
       else if(a>b)
       {
        return gcd(a-b,b);
       }
         else {
            return(b-a,a);
         }

int main(){

int a = 12;
int b = 6;
cout<<"The gcd is "<<gcd(a,b);

















    return 0;
}