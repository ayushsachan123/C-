#include<bits/stdc++.h>
using namespace std;

int main(){
    //vec -> {1,6,2,7,4}
//        0 1 2 3 4
//sort it so that only indexes from 1 to 3
//final vec -> {1,2,6,7,4}
//sort only middle junction

vector<int> v={1,6,2,7,4};
sort(v.begin()+1,v.begin()+4);

for(auto itr:v){
    cout<<itr<<" ";
}
    return 0;
}
