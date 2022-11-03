#include<bits/stdc++.h>
using namespace std;

int main(){
    //map store only unique keys
    //time complexity is logn

map<string,int>mpp;

mpp["ayush"]=44;
mpp["Sumit"]=33;
mpp["shubham"]=11;
mpp["Ujjawal"]=22;
mpp["ayush"]=45;

//printing map;
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
}
for(auto it = mpp.begin();it!=mpp.end();it++){
 cout<<it->first<<" "<<it->second<<endl;
}


//does'nt stores in any order
unordered_map<int,int>mpp;
//o(1) in almost all cases
//o(n) in the worst case, where n is the container size


//Multimap
//sorted but multiple keys
multimap<string,int>mpp;
mpp["ayush"]=2;
mpp["ayush"]=4;

 return 0;
}

