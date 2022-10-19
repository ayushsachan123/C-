//Find me the last occurance of x in an arr
//arr[]->{1,5,7,7,8,10,10,10,11,11,12}
//index   0 1 2 3 4  5  6  7  8 9  10
//last occurance of x=10, ans = 7th index
//last occurance of x=6, ans = does not exists

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
//last occurance of x = 13 ,does'nt exist
int ind= upper_bound(arr,arr+n,x)-arr;
ind -=1;
if(ind>=0 && arr[ind]==x){
    cout<<"last occurance"<<ind<<endl;
}
else{
    cout<<"Does not exists"<<endl;
}

    return 0;
}
