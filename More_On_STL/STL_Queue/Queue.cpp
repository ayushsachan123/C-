#include<bits/stdc++.h>
using namespace std;

int main(){

 //time complexity o(1)
//only deletion of stack take linear time 

    queue<int>q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);

cout<<q.front()<<endl; //->prints 1
q.pop();

cout<<q.front()<<endl;//-> prints 5

while(!q.empty()){
    q.pop();
}


//you can also insert element using loop

for(int i=0;i<5;i++){
    q.push(i);
}


    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
// 5
