#include<bits/stdc++.h>
using namespace std;

int main(){
// I give you a range and I want you to find the sum in that range
//i to j, tell me the sum in that range i to j

int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int sum=0; 
for(int i=0;i<n;i++){ // you can also write i and j for finding sum in particular range
sum+=arr[i];
}

//accumulate(startIterator,endIterator,initialSum);

int sum1 = accumulate(arr,arr+n,0); //here 0 is the initial sum

vector<int> v;

int sum2= accumulate(v.begin(),v.end(),0);

    return 0;
}
