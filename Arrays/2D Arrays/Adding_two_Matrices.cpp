#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the rows & column of Matrix- ";
cin>>a>>b;
int A[a][b];
int B[a][b];
int C[a][b];
cout<<"Enter the elements of Matrix 1- ";
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
    cin>>A[i][j];
}
}
cout<<"Enter the elements of Matrix 2- ";
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
    cin>>B[i][j];
}
}

for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
cout<<C[i][j]<<" ";
}
cout<<endl;
}

return 0;
}

//-----------------------------------------------------------------------------------------------------------
// Input--
// Enter the rows & column of Matrix- 2 2
// Enter the elements of Matrix 1- 1 2
// 3 4
// Enter the elements of Matrix 2- 2 3
// 4 5
// Output--
// 3 5 
// 7 9 
