#include<iostream>
#include<climits>
using namespace std;
int main()
{ 
    int m,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>m;
    int max=INT_MIN;
    int min=INT_MAX;
    int arr[m];
    cout<<"enter the values of the array"<<endl;
    for( i=0;i<m;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<m;i++){
      if(arr[i]>max)
      { 
        max=arr[i];
      }
      if(arr[i]<min)
      { 
          min=arr[i];
      }

    }
    cout<<"greatest element in this array is :";
    cout<<max<<endl;
    cout<<"smallest element in this array is :";
    cout<<min<<endl;
}

