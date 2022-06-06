// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cout<<"Enter no. of rows";
//     cin>>n;
//     cout<<"Enter no. of columns";
//     cin>>m;
//     int arr[n][m];
//     cout<<"Enetr the array elements \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
         
// //    cout<<"The Traversal Matrix is\n";
// //     for(int i=0;i<n;i++){
// //        for(int j=0;j<m;j++){
// //             if(i==0)
// //             { 
// //               cout<<arr[i][j];
// //             }
// //        }
// //     }
// //     for(int i=0;i<n;i++){
// //        for(int j=0;j<m;j++){
// //             if(j==2)
// //             { 
// //               cout<<arr[i][j];
// //             }
// //        }
// //     }
// //     for(int i=n;i<=n;i--){
// //        for(int j=m;j<=m;j--){
// //             if(i==2)
// //             { 
// //               cout<<arr[i][j];
// //             }
// //        }
// //     }
// for(int i=2;i>=0;i--)
//   {
//   for(int j=2;j>=0;j--)
//     { 
//     cout<<arr[i][j]<<"\t";
//     }
//   cout<<endl;
//   }
// return 0;
// } 
#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"Enter the no. of rows";
cin>>n;
cout<<"Enter the no. of columns";
cin>>m;

int a[n][m];
cout<<"Enter the array elements";
for(int i=0;i<n;i++)
  {
  for(int j=0;j<m;j++)
    {
    cout<<"Enter Number";
    cin>>a[i][j];
    }
  }

  for(int i=(n-1);i>=0;i--)
  {
  for(int j=(m-1);j>=0;j--)
    { 
    cout<<a[i][j]<<"\t";
    }
  cout<<endl;
  }
return 0;
}