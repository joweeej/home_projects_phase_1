#include<iostream>
#include<list>
using namespace std;

class youtubeChannel {
    public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> publishedVideoTitles;

//constuctor example;
    youtubeChannel(string name, string ownerName){
     Name = name;
     OwnerName = ownerName;
     SubscribersCount = 0;
    }
//method getInfo that you can call at the main function so all the immplementations of the object are in the main  class 
void getInfo()
{
   cout<<"Name ;"<<Name<<endl;
cout<<"ownerName ;"<<OwnerName<<endl;
cout<<"SubscribersCount ;"<<SubscribersCount <<endl;
cout<<"videos : "<<endl;
for(string videoTitle :publishedVideoTitles){
    cout<<videoTitle<<endl; 
}
};
 int main()
 {
 

youtubeChannel ytChannel("CodeBeauty","CB gurrl innnit");

ytChannel.publishedVideoTitles.push_back("C++ for begginers.");
ytChannel.publishedVideoTitles.push_back("HTML for begginers.");
ytChannel.publishedVideoTitles.push_back("OOP for begginers.");
ytChannel.getInfo();


 

    return 0;
 } 