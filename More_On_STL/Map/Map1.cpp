#include<bits/stdc++.h>
using namespace std;

int main(){
    //map store only unique keys
    //time complexity is logn

map<string,int>mpp;
// map<string,int>::iterator it;
mpp["ayush"]=44;
mpp["Sumit"]=33;
mpp["shubham"]=11;
mpp["Ujjawal"]=22;
mpp["ayush"]=45; //it overwrite so store 45

mpp.emplace("ayush",48); //slight quicker

mpp.count("ayush"); //always return 1 as it stores only 1

mpp.erase("ayush"); //mpp.erase(key)

//erasing all data
mpp.erase(mpp.begin(),mpp.end());
mpp.clear(); //entire map is cleaned up


//mpp.erase(mpp.begin(),mpp.begin()+2); cleans up a given range

auto it = mpp.find("ayush"); //points to where ayush lies

it = mpp.find("ayush"); //Instance of ayush so it points to the end

if(mpp.empty()){
    cout<<"Yes it is empty"<<endl;
}

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Yes it is empty
