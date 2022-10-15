#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m.insert(pair<int ,string>(1,"john"));
    m.insert(pair<int,string>(2,"Ravi"));
    m.insert(pair<int,string>(3,"Raman"));
    m.insert(pair<int,string>(4,"vicky"));

    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

//finding the value at place you want

     map<int,string>::iterator itr1;
     itr1=m.find(2);
     cout<<"Value found is"<<endl;
    cout<<itr->first<<" "<<itr->second<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1 john
// 2 Ravi
// 3 Raman
// 4 vicky
// Value found is
