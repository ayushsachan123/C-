#include<bits/stdc++.h>
using namespace std;

int main(){
    //lifo data structure
stack<int> st;
st.push(2);
st.push(4);
st.push(3);
st.push(1);

cout<<st.top()<<endl; //->prints 1

st.pop(); //delete the last entered element

cout<<st.top()<<endl; //-> prints 3
st.pop();

cout<<st.top()<<endl; //-> prints 4

bool flag = st.empty(); //return true if stack is empty,or false
cout<<flag;

//deleted the entire stack
while(!st.empty()){
  st.pop();
}
cout<<st.size()<<endl; //number of elements in stack

return 0;

} 

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
// 3
// 4
// 00
