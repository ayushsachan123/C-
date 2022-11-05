#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> st={1,5,7,8};
     //return iterator which point to 7
    //   auto it=st.find(7); //log n it will be iterator to 7
    //  auto it =st.find(9); //it=st.end();
  //insert element
    st.emplace(6); //st.insert(6);

    //printing size

    cout<<st.size()<<endl;
  for(auto it:st){
    cout<<it<<endl;
  }

    return 0;

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
// 1
// 5
// 6
// 7
// 8
