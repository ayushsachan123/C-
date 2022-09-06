#include<iostream>
using namespace std;
int main(){
    int i,j;
    int count=0;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            cout<<" ";   
        } 
        for(j=count+i;j<4;j++){
            cout<<"*";
        }              
        cout<<endl;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// ****
//   ***
//    **
//     *
