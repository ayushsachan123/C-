#include<iostream>
using namespace std;
int linear(int arr[],int b){
    int c= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<c;i++){
        if(b==arr[i]){
            return i;
        return 0;
        }
    }
        cout<<"Not found";
}

int main(){
    int a,key;
    cout<<"Enter the no. of elements & key:- ";
    cin>>a>>key;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int c= linear(arr,key);
    cout<<c<<endl;
}

//-------------------------------------------------------------------------------------------------------------
// Input--
// Enter the no. of elements & key:- 5 2
// 1 
// 2
// 3
// 4
// 5
// Output--
// 1
