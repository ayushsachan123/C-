#include<iostream>
using namespace std;
int main(){
    int arr[]={6,2,13,17,20,22,25,28,30,55};
      int l=0,h=9,key,mid;
      cout<<"Enter key--";
      cin>>key;
      while(l<=h){
      mid =(l+h)/2;
      if(key==arr[mid]){
        cout<<mid;
        return 0;
      }
      else if(key<arr[mid]){
      h=mid-1;
      }
      else{
        l=mid+1;
      }
      }
      cout<<"Not found";
      return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// Enter key--13
// Output--
// 2
