#include<iostream>
using namespacce std;

struct YouTubeChannel{
    string Name;
    int SubscribersCount;


    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
}
//We pass values by reference if they are not tupe to transfer 
/*void  operator<<(ostream& COUT, YouTubeChannel& ytChannel){
COUT<<" Name ;"<<ytChannel.Name <<endl;
COUT<<"Subscribers : "<<ytChannel.SubscribersCount<<endl;
}*/

ostream&  operator<<(ostream& COUT, YouTubeChannel& ytChannel){
COUT<<" Name ;"<<ytChannel.Name <<endl;
COUT<<"Subscribers : "<<ytChannel.SubscribersCount<<endl;
return COUT;
}
int main()
{

YouTubeChannel yt1 = YouTubeChannel("CodeBeauty",75000);
YouTubeChannel yt2 = YouTubeChannel("My Second Channel",70000);

cout<< yt1<<yt2;

//A similar way to do  the above by invoking the function.

operator<<(cout, yt1);



    return 0;
}