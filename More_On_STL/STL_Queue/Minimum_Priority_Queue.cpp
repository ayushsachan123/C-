#include<bits/stdc++.h>
using namespace std;

int main(){

// minimum priority queue
//it stores values in ascending order

  priority_queue<int,vector<int>,greater<int>>pq;

  pq.push(1);
  pq.push(5);
  pq.push(2);
  pq.push(6);

  cout<<pq.top()<<endl; //->prints 1 

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
