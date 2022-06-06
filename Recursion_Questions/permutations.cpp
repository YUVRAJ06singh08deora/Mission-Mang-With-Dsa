#include<iostream>
using namespace std;
void printPermutation(int arr[],int n)
{ 
    
    for(int i=0;i<n;i++)
    { 
        if(i==n)
    {
       arr[n]=arr[i];
       return;
    }
      swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++)
    { 
        cout<<arr[i]<<" ";
    }
}
int main()
{
     int n;
     cout<<"enter the size of array"<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter the values of elements"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"Originial array is";
     for(int i=0;i<n;i++)
     { 
         cout<<arr[i]<<" ";
     }
     cout<<"\n";
     printPermutation(arr,n);

}