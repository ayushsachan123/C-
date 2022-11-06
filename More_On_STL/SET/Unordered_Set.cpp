#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>st;
    st.insert(2);
    st.insert(3);
    st.insert(1);

    for(auto it :st){
        cout<<it<<endl;
    }

    //average time complexity is 0(1) it is better than 0(logn) i.e of set
    //but the worst case is linera in nature, 0(set size)

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
// 3
// 2
