#include<bits/stdc++.h>
using namespace std;

int main(){

//push
//size
//pop
//top pop
//empty

//stores element in desending order

priority_queue<int>pq;
pq.push(1);
pq.push(5);
pq.push(2);
pq.push(6);

 cout<<pq.top(); // prints ->6

pq.pop();

cout<<pq.top(); // prints ->5

//storing pairs

priority_queue<pair<int,int>> pq1;

pq1.push(make_pair(1,5));
pq1.push(make_pair(1,6));
pq1.push(make_pair(1,7));



    return 0;
} 

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 65
