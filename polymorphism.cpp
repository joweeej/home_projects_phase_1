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
int ContentQuality;

public:
youTubeChannel(string name, string ownerName){
    Name = name;
    OwnerName = ownerName;
    SubscriberCount = 0;
    ContentQuality = 0;
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
    void checkAnalytics(){
        if ( ContentQuality<5){
            cout<<Name<<" has poor quality content"<<endl;
        }
        else{
            cout<<Name<<" has good quality content."<<endl;
        }
    }

};
//inheritance ;youTubeChannel is the base class & Cookingytc is the derived .

class CookingYoutubeChannel:public youTubeChannel{
    public:
CookingYoutubeChannel(string name, string ownerName):youTubeChannel(name,ownerName){

}
void practice(){
    cout<<OwnerName<<" is practising cooking, learning new recipes, experience with spices "<<endl;
ContentQuality = ContentQuality + 1;
}

class SingersYoutubeChannel:public youTubeChannel{
    public:
SingersYoutubeChannel(string name, string ownerName):youTubeChannel(name,ownerName){

}
void practice(){
    cout<<OwnerName<<" is taking singing classes, learning new songs ,learning how to dance"<<endl;
}






};
int main()
{


CookingYoutubeChannel cookingytChannel("Amy's kitchen","Amy");
SingersYoutubeChannel singingytChannel("John sings","John");

 cookingytChannel.practice();
 singingytChannel.practice();
 singingytChannel.practice();
 singingytChannel.practice();
 singingytChannel.practice();
 singingytChannel.practice();
//invoking nethods using pointers is possinble using polymorphism!
 youTubeChannel* yt1 = &CookingYoutubeChannel;
 youTubeChannel* yt2 = &SingersYoutubeChannel;

 yt1->checkAnalytics();
  yt2->checkAnalytics();
 
    return 0;  
} 