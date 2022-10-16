#include<bits/stdc++.h>
using namespace std;

int main(){
   //arr[] -> {1,6,7,1,2,1,3}
   //x=1;
   //tell me how many times the element 1 occurs in the array
    int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
    int x=1;
     int cnt=0;
     //o(n)
    for(int i=0;i<n;i++){
       if(arr[i]==x){
        cnt++;
       } 
    }
cout<<cnt;

//count(firstIterator,lastIterator,x);
int cnt1=count(arr,arr+n,1);

vector<int>v;
int cnt1= count(v.begin(),v.end(),1);

    return 0;
}
