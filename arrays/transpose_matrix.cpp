#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter the row size \n";
    cin>>n;
    cout<<"Enetr the column size \n";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the array elements \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }
    cout<<"Original Matrix is \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of the matrix is \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}