#include<iostream>
#include<list>
using namespace std;
class youTubeChannel{
private:
string Name;
int SubscriberCount;
list<string>PublishedVideoTitles;
protected:
string OwnerName;
public:
youTubeChannel(string name, string ownerName){
    Name = name;
    OwnerName = ownerName;
    SubscriberCount = 0;

}
void getInfo()
{
    cout<<"Name ; "<<Name<<endl;
    cout<<"ownerName; "<<OwnerName<<endl;
    cout<<"SubscribersCount; "<<SubscriberCount<<endl;
    cout<<"Videos;"<<endl;

    for(string videoTitles : PublishedVideoTitles )
    {
        cout<<videoTitles<<endl;
    }
}
  void subscribe()
  {
    
    
     SubscriberCount++;
    
   }
  void unsubscribe()
  {
    if(SubscriberCount>0)//if condition to  solve the  bug that  comes with this function in that, if the initial subscriber count were zero itd remain that way and not be negative.
    {
    SubscriberCount--;
    }
  }

    void publishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

};
//inheritance ;youTubeChannel is the base class & Cookingytc is the derived .

class CookingYoutubeChannel:public youTubeChannel{
    public:
CookingYoutubeChannel(string name, string ownerName):youTubeChannel(name,ownerName){

}
void practice(){
    cout<<OwnerName<<" is practising cooking, learning new recipes, experience with spices "<<endl;
}
};
int main()
{

youTubeChannel ytChannel("Code Beauty","Saldina");
ytChannel.publishVideo("C++ for beginners");
ytChannel.publishVideo("HTML for beginners");
ytChannel.publishVideo("OOp C++ for beginners");
ytChannel.subscribe();
ytChannel.subscribe();
ytChannel.subscribe();


CookingYoutubeChannel ytChannel2("Amy's Kitchen","Amy");
CookingYouTubeChannel ytChannel3("John's kitchen","John");
ytChannel2.getInfo();
ytChannel2.publishVideo("Chocolate Cake");
ytChannel2.publishVideo("Apple Cake");
ytChannel2.publishVideo("Carrot Soup");
ytChannel2.practice();
ytChannel3.practice();



 
    return 0;
}