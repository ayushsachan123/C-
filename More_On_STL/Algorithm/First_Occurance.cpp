#include<bits/stdc++.h>
using namespace std;

int main(){
    //arr[]->{1,2,5,1,2,4,4}
    //I want you to find the first occurance of 2
    // It is in the index 1
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
cin>>x;
    int ind=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            ind=i;
            break;
        }
    }

cout<<ind;

//arr[]->{1,2,5,1,2,4,4} get the iterator not index
auto it= find(arr,arr+n,2); //return an iterator
//pointing to the first instance of it, or else it
//returns pointing to the end if it is not there 

//as it is giving the index so we subtract begin() with it so we get index
int ind= it-arr; //arr means it is the first iterator

//vector
vector<int> v;
auto it1=find(v.begin(),v.end(),2);
int ind1= it1-v.begin();

//arr[]-> {1,5,6,2,3,5,6};
//x=4;

auto it1=find(v.begin(),v.end(),4);
if(it1==v.end()){
    cout<<"Element is not present"<<endl;
}
else{
    cout<<"Element is first present at: "<<it1-v.begin()<<endl;
}
    return 0;
}
