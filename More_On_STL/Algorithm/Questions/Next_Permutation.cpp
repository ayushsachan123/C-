#include<bits/stdc++.h>
using namespace std;

int main(){
    
//Next Permutation
//string s= "abc"
//all permutations are as follows
//No. of permutation generally n!

//abc
//acb
//bac
//bca
//cab
//cba

string s="bca";
//the next permutation of bca is cab so it exist so it return true and stores in string

bool res= next_permutation(s.begin(),s.end());
//return true;

//s= cba
//bool res= next_permutation(s.begin(),s.end());
//there is no next permutation after cba so it will return false
//return false;

//if there is any random string s="bca"
//I want you to print all the permutation
//Time complexity Nlog N

string s1="bca";
sort(s1.begin(),s1.end()); //It makes the string as abc
do{
 cout<<s1<<endl;
}while(next_permutation(s1.begin(),s1.end()));

//prev permutation 
// bool res= prev_permutation(s.begin(),s.end());


//For Array
int arr[]={1,6,5};
int n=3;
sort(arr,arr+n);
do{
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }while(next_permutation(arr,arr+3));

    return 0;
}
