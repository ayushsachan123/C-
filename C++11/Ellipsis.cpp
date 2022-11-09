#include<iostream>
#include <cstdarg>
using namespace std;


int sum(int n,...){
    va_list list;
    va_start(list,n);
  
    int s=0;
    for(int i=0;i<n;i++){
    s+=va_arg(list,int);  
    }
     va_end(list);
    return s;
}
int main(){
int a= sum(3,10,20,30);
cout<<a<<endl;

cout<<sum(5,10,20,30,40,50)<<endl;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 60
// 150
