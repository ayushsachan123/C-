#include<bits/stdc++.h>
using namespace std;

int main(){
 //to define 2d vectors

vector<vector<int>>vec;

vector<int>ayush;
ayush.push_back(1);
ayush.push_back(2);

vector<int>ayush1;
ayush1.push_back(10);
ayush1.push_back(20);

vector<int>ayush2;
ayush2.push_back(25);
ayush2.push_back(35);
ayush2.push_back(45);

vec.push_back(ayush);
vec.push_back(ayush1);
vec.push_back(ayush2);


for(auto vctr: vec){
    for(auto it:vctr){
        cout<<it<<" ";
}
    cout<<endl;
}

//traditional way

for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}

//define 10 * 20
vector<vector<int>>vec2(10,vector<int>(10,0));

//you can increase the size
vec2.push_back(vector<int>(10,0));

cout<<vec2.size()<<endl; //->prints 11

vec2[1].push_back(1);

for(auto vctr: vec2){
    for(auto it:vctr){
        cout<<it<<" ";
}
    cout<<endl;
}

//every block in array has a vector
vector<int>arr[4];
arr[0].push_back(2);

//3d vector 10*20*30
//vector<vector<vector<int>>>vec1(10,vector<vector<int>>vec1(20,vector<int>(30,0)));

    return 0;

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1 2 
// 10 20 
// 25 35 45 
// 1 2 
// 10 20 
// 25 35 45 
// 11
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 1 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
