#include<iostream>
using namespace std;
int main()
{

int score;
cout<<"Enter your score: ";
cin>>score;

if(score<=40)
{
    cout<<"You have a D"<<endl;

}

  else if(score>40 && score <= 55)
  {
    cout<<"You have a C "<<endl;
  }
    
    else if(score>55 && score<=70)
    {
      cout<<"You have a B"<<endl;
    }
   
    else{
        cout<<"You have an A "<<endl;
    }









    return 0;
}