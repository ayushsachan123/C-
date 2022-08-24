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
   int max = arr[0];
   for(i=0;i<n;i++){
   if(arr[i]>max){
    max=arr[i];
   }
 
   }
     cout<<max;
   return 0;
}

//-------------------------------------------------------------------------------------------------------------
// Input--
// Enter the size of array5
// 5 7 4 3 9
// Output--
// 9
