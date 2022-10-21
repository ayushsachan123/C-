#include<bits/stdc++.h>
using namespace std;

int main(){

    // node st = new node("Ayush",79,91.0,'A');
array<int, 5>arr1;// -> {?,?,?}

array<int,5>arr2={1,2}; //->{1,2,0,0,0};

arr2.fill(5);// It will fill whole array with 5 {5,5,5,5,5}
for(int i=0;i<5;i++){
  cout<<arr2.at(i)<<" ";  //whole array get printed
}
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
//Output--
//5 5 5 5 5
