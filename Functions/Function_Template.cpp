#include<iostream>
using namespace std;

template <class T>  //you can give any name other than T
T maxi(T x,T y){
    if(x>y){
        return x;
    }
        else{
        return y;
    }
}

int main(){
   cout<<maxi(1,2)<<endl; //Integer
   cout<<maxi(2.3,1.4)<<endl;   //double
   cout<<maxi(2.3f,5.6f)<<endl; //float
   return 0;
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// 2
// 2.3
// 5.6
