#include<bits/stdc++.h>
using namespace std;

int main(){

//storing information in ascending order

priority_queue<int>pq;

pq.push(-1);
pq.push(-5);
pq.push(-2);
pq.push(-6);

cout<<-1 * pq.top()<<endl; //prints 1

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
