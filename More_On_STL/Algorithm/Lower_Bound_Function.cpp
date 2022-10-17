#include<bits/stdc++.h>
using namespace std;

int main(){
   //returns an Iterator pointing to the first element 
   //which is not less than x
   //arr[]->{1,5,7,7,8,10,10,10,11,11,12} 
   //x=10
   //10 is the first element which is not lesser than 10 it will point to 10
   //x=6
   //7 is the first element which is not lesser than 6 it will point to 7
   //x=13
   //It will always point to the last i.e end()
  //this works in log N
  //works only in sorted array

 int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int x=10;
   auto it = lower_bound(arr,arr+n,x);
  int ind = it- arr;

 //For Vectors
 vector<int>v;

   auto it1 = lower_bound(v.begin(),v.end(),x);
   int ind1 = it1-v.begin();

   
    return 0;
}
