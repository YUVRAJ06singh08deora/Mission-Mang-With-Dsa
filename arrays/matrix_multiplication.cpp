#include<iostream>
using namespace std;
int main()
{
    int m,n,o,p,i,j;
    cout<<"Enter the row size for first matrix \n";
    cin>>n;
    cout<<"Enetr the column size for first matrix\n";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the array elements for 1st matrix \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }
    cout<<"Enter the row size for second matrix \n";
    cin>>o;
    cout<<"Enetr the column size for second matrix\n";
    cin>>p;
    int arr1[o][p];
    cout<<"Enter the array elements for 2nd matrix \n";
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
           cin>>arr1[i][j];
        }
    }
    cout<<"The multiplication matrix \n";
    int result[n][p];
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++){
            result[i][j]=0;
            for(int k=0;k<o;k++){
            result[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<p;j++)
     {
         cout<<result[i][j]<<" ";
     }
     cout<<endl;
    }
    
    return 0;
}
