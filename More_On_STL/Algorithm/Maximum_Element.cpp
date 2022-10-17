#include<bits/stdc++.h>
using namespace std;

int main(){

//If I want to find the maximum elements in any index range
// i to j give me the maximum
int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int maxi=INT_MIN;
for(int k=0;k<5;k++){
 if(arr[k]>maxi){
    maxi=arr[k];
 }
}
cout<<maxi<<endl;

//or
int el= *max_element(arr,arr+n);
int el1=*min_element(arr,arr+n);


vector<int>vec;

int el= *max_element(vec.begin(),vec.end());
int el1=*min_element(vec.begin(),vec.end());

    return 0;
}
