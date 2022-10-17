#include<bits/stdc++.h>
using namespace std;

int main(){
    // If I wanna reverse
   //reverse(startIterator,endIterator) -> [)
   int n;
   cin>>n;
   int arr[n];
   reverse(arr,arr+n);
   reverse(arr +1,arr+4);

vector<int>v;
reverse(v.begin(),v.end());

reverse(v.begin()+1,v.begin()+4);

    return 0;
}
