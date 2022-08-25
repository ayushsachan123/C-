#include<iostream>
using namespace std;
int main(){
    int n,i;
    int arr[n];
    cout<<"Enter the size of array";
    cin>>n;
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   int sum=0;
   for(i=0;i<n;i++){
    sum=sum +arr[i]; 
   }
   cout<<sum;
   return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// Enter the size of array 5
// 1 2 3 4 5
// Output--
// 15
