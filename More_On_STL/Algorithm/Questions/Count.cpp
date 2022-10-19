#include<bits/stdc++.h>
using namespace std;

int main(){
//Q3. Tell me the number of times the x apperars in arr
//arr[]-> {1,5,7,7,8,10,10,10,11,11,12}
//index    0 1 2 3 4  5  6  7  8  9  10 

//x=10, ans=3
//x=7, ans=2

int arr[11]={1,5,7,7,8,10,10,10,11,11,12};
int cnt = count(arr,arr+11,10);
cout<<cnt<<endl;
//or

auto b= lower_bound(arr,arr+11,10);
int a=b-arr;
auto b1= upper_bound(arr,arr+11,10);
int c=b1-arr;
cout<<c-a<<endl;
    return 0;
}
