#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}

    sort(arr,arr+n); //sorts everything in ascending order
    //comperator
     //desending
   // sort(arr,arr+n,comp);
   //greater<int> is an inbuilt comperator
   //which works only if you wanna do this in decreasing
   //sort(arr,arr+n,greater<int>);

    return 0;
}
