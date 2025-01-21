#include<iostream>

#include<list>
using namespace std;

class youTubeChannel{
public:
string name;
string ownerName;
int subscribersCount;
list<string> publishedVideoTitles;

};
int main()
{

youTubeChannel ytChannel;

ytChannel.name = "Code Beauty";
ytChannel.ownerName = "CB gurrlyyh";
ytChannel.subscribersCount = 1800;
ytChannel.publishedVideoTitles = {"Cpp for beginners Videon1","HTML and CSS Video 1","C++ OOp video"};

cout<<"Name: " <<ytChannel.name<<endl;
cout<<"OwnerName: " <<ytChannel.ownerName<<endl;
cout<<"SubscribersCount: " <<ytChannel.subscribersCount<<endl;
cout<<"videos;"<<endl;
for(string videoTitle:ytChannel.publishedVideoTitles){
    cout<<videoTitle<<endl;
}






    return 0;
}