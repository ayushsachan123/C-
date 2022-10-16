#include<bits/stdc++.h>
using namespace std;

int main(){
    //This stl only work on sorted arrays
    //arr[] ->{1,5,7,9,10}
    //x=9
    //true -> 9 exists in my array
    //x=8
    //flase -> 8 does not exist in my array

    //binary_search(firstIterator,lastIterator,x);
    //return a true or return false
 int n;
cout<<"Enter no. of elements"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"Enter element which you want to find: "<<endl;
//works in log n complexity
    bool res = binary_search(arr,arr+n,8);

//For Vectors
vector<int>v;
bool res1 = binary_search(v.begin(),v.end(),8);

    return 0;
}
