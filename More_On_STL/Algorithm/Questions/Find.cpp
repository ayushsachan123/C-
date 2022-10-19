//Q1. find the first index where the element X lies
//find function can be used but that takes o(N) times
//the array is sorted.

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
cout<<"Enter element which you want to find: "<<endl;

int x;
//There are couple of ways to do it
//1st way
if(binary_search(arr,arr+n,x)==true){
    cout<<lower_bound(arr,arr+n,x)-arr;
}
else{
    cout<<"does not exists";
}

//2nd way
int ind= lower_bound(arr,arr+n,x)-arr;
if(ind !=n && arr[ind]==x){
    cout<<"found at: "<<endl;
}
else{
    cout<<"Not found"<<endl;
}

    return 0;
}
