#include<iostream>
#include<list>
using namesace std;
struct YouTubeChannel{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount= subscribersCount;
    }
    bool operator ==(const YouTubeChannel)const{//so the function does dot change the values of the function,just returns true or false.
        return this->Name == channel.Name;
    }
};
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){

}

struct MyCollection{
list<YouTubeChannel>myChannels;
void operator+=(YouTubeChannel& channel){
    this->myChannels.push_back(channel);
}


};
ostream& operator<<(ostream& COUT,MyCollection& myCollection)
{
    fot(YouTubeChannel ytChannel : myCollection.myChannels)
    COUT<< ytChannel<<endl;
    retutn COUT;

}
int main()
{


YouTubeChannel yt1 = YouTubeChannel("Code Beauty",7500);
YouTubeChannel yt2 = YouTubeChannel("Joy Beauty",8000);
MyCollection myCollection;
myCollection += yt1;
myCollection += yt2;
myCollection -= yt2;
cout<<myCollection;










    return 0;
}