#include<iostream>
#include<vector>
#define r 4
#define c 5
using namespace std;

int main(){
    int num=10;
    vector<vector<int>>vec;
   for(int i=0;i<r;i++){
    vector<int>v1;
    for(int j=0;j<c;j++){
       v1.push_back(num);
       num+=5;
    }
    vec.push_back(v1);
   }

for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10 15 20 25 30 
// 35 40 45 50 55 
// 60 65 70 75 80 
// 85 90 95 100 105 
