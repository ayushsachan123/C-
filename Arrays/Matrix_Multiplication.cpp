#include <iostream>
using namespace std;
int main()
{
int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
cout << "Enter rows and columns for first matrix: ";
cin >> r1 >> c1;
cout << "Enter rows and columns for second matrix: ";
cin >> r2 >> c2;
if (c1!=r2)
{
    cout<<"cant be multiplied";
return 0;
}
// Storing elements of first matrix.
cout << endl << "Enter elements of matrix 1:" << endl;
for(i = 0; i < r1; ++i)
for(j = 0; j < c1; ++j)
{
cout << "Enter element a" << i + 1 << j + 1 << " : ";
cin >> a[i][j];
}
// Storing elements of second matrix.
cout << endl << "Enter elements of matrix 2:" << endl;
for(i = 0; i < r2; ++i)
for(j = 0; j < c2; ++j)
{
cout << "Enter element b" << i + 1 << j + 1 << " : ";
cin >> b[i][j];
}
// Multiplying matrix a and b and storing in array mult.
for(int i=0;i<r1;++i)
    for(int j=0;j<c2;++j){
        mult[i][j]=0;
for(k = 0; k < c1; ++k)
{
        mult[i][j]+=a[i][k]*b[k][j];
    }
}
// Displaying the multiplication of two matrix.
cout << endl << "Output Matrix: " << endl;
for(i = 0; i < r1; ++i){
for(j = 0; j < c2; ++j){
cout << " " << mult[i][j];
if(j == c2-1){
cout << endl;
}
}
}
return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// Enter rows and columns for first matrix: 2 2
// Enter rows and columns for second matrix: 2 2

// Enter elements of matrix 1:
// Enter element a11 : 3
// Enter element a12 : 7
// Enter element a21 : 4
// Enter element a22 : 9

// Enter elements of matrix 2:
// Enter element b11 : 6
// Enter element b12 : 2
// Enter element b21 : 5
// Enter element b22 : 8

// Output--
// Output Matrix: 
//  53 62
//  69 80
