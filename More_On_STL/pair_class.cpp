#include<bits/stdc++.h>
using namespace std;

int main(){

pair<int,int>pr={1,2};
cout<<"for pr1"<<endl;
cout<<pr.first<<",";
cout<<pr.second<<endl;

pair<pair<int,int>,int>pr1={{1,2},2};
cout<<"for pr1"<<endl;
cout<<pr1.first.first<<",";
cout<<pr1.first.second<<" ,";
cout<<pr1.second<<endl;

pair<pair<int,int>,pair<int,int>>pr2={{1,2},{2,4}};

cout<<"for pr2"<<endl;
cout<<pr2.first.first<<",";  //-> 1
cout<<pr2.first.second<<" ,";
cout<<pr2.second.first<<",";
cout<<pr2.second.second<<endl; //-> 2


vector<pair<int,int>>vec;
set<pair<int,int>>st;
map<pair<int,int>,int>mpp;

//unodered_map<pair<int,int>,int>mpp; not possible you cannot define pair of unordered map

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// for pr1
// 1,2
// for pr1
// 1,2 ,2
// for pr2
// 1,2 ,2,4
