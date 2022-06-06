#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key) {
    int s=0;
    int e=n;
    while(s<=e)
    {
       int mid=(s+e)/2;
       if(arr[mid]==key)
       {
           return mid;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else
       {
           s=mid+1;
       }

      
    }
    return -1;
}
int main()
{
    int m,i;
    cout<<"Enter the size of the array";
    cin>>m;
    int key;
    int arr[m];

    cout<<"Enter the element of array"<<endl;
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to be searched"<<endl;
    cin>>key;
    cout<<binarySearch(arr,m,key);
    return 0;
}