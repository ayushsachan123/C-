#include<iostream>
using namespace std;

int add(int a,int b){
   return a+b;
}


int main(){
    cout<<"Enter the numbers:- ";
    int a,b;
    cin>>a>>b;
  int c = add(a,b);
  cout<<c;
  return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// Enter the numbers:- 4 5
// Output--
// 9
