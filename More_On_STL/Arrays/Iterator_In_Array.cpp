#include<bits/stdc++.h>
#include <array>
using namespace std;

int main(){

    array<int,5>arr={1,2,3,4,5};

    cout << arr.size()<<endl; 

         //printing Array

   for(auto it=arr.begin();it!=arr.end();it++){
       cout<<*it<<" ";  //it is pointing to address
   }
   cout<<endl;
  
  //print Reverse Array

     for(auto it=arr.rbegin();it!=arr.rend();it++){
       cout<<*it<<" ";  //we don't need to write it--
                       //because it already move backward
   }
  cout<<endl;
     
   for(auto it=arr.end()-1;it>=arr.begin();it--){
       cout<<*it<<" ";  //it is pointing to address
   }

  cout<<endl;

//for each loop

  for(auto it: arr){
    cout<<it<<" ";   //it is fointing to element itself
  }

  cout<<endl;

  string s="ayush";

  for(auto c:s){
    cout<<c<<" ";
  }

  cout<<endl;
  //Size
     cout << arr.size()<<endl; 

  //first element
  cout<<arr.front()<<endl; //alternative  arr.at(0);
   
  //last element 
  cout<<arr.back()<<endl;// arr.at(arr.size()-1);
  
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
//Output--
// 5
// 1 2 3 4 5 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 1 2 3 4 5 
// a y u s h 
// 5
// 1
// 5

