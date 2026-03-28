#include <iostream>
#include<list>

using namespace std; 

class YouTubeChannel {
  public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};

int main(){
  YouTubeChannel ytChannel;
  ytChannel.Name = "DCT Lab";
  ytChannel.OwnerName = "Mr.DCT";
  ytChannel.SubscriberCount = 200;
  ytChannel.PublishedVideoTitles = {"GCE 2025 CS P3", "Master C++ OOPs", "Leanear Regresion model in C"};
  
  cout << "YouTube Channel: " << endl;

  cout << "Name: " << ytChannel.Name << endl;
  cout << "OwnerName: " << ytChannel.OwnerName << endl;
  cout << "SubscriberCount: " << ytChannel.SubscriberCount << endl;
  cout << "Videos: " << endl;

  for (string videoTitle : ytChannel.PublishedVideoTitles) {
    cout << videoTitle << endl; 
  }

  system("pause>0");
}
