#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x);
  }

  for(auto it=st.begin();it!=st.end();it++){
    cout<<" "<<*it<<endl;
  }

//for accesing element
cout<<*st.begin()+1<<endl;

//st -> {1,2,5}
//erase functionallity

st.erase(st.begin());  //st.erase(iterator) //st ->{2,5}

//entire set deleted
st.erase(st.begin(),st.end());
//st.erase(startIterator,endIterator) 

//st.erase(particular element);
cout<<*st.begin()+1<<endl;


return 0;
}

