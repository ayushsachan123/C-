#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";  //if(i>=j) 
        }               //cout"*";
        cout<<endl;
    }
    return 0;
}

//------------------------------------------------------------------------------------------------------------
// Output--
// *
// **
// ***
// ****
