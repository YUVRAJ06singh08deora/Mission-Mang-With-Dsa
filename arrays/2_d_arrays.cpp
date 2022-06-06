#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter no. of rows";
    cin>>n;
    cout<<"Enter no. of columns";
    cin>>m;
    int arr[n][m];
    cout<<"Enetr the array elements \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
         }
   cout<<"The entered array element is \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
            
        }
      cout<<endl;
    }
    return 0;
}