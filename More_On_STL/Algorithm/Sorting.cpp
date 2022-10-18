#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorts the array in increasing order
    sort(arr,arr+n);

vector<int>vec(5,0);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

sort(vec.begin(),vec.end()); //[)

    return 0;
}
