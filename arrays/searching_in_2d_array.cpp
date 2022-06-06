#include<iostream>
using namespace std;
int main()
{
    int n,m,search;
    bool flag=0;
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
         
   cout<<"Enete the element to be searched\n";
   cin>>search;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==search){
                cout<<"Element found at index position row"<<(i+1)<<"Column "<<(j+1);
                 flag=1;
            }
           
        }
    }
    if(flag==0){
        cout<<"Element not found";
    }
    return 0;
}