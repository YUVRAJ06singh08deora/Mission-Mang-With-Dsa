#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int csum=0;
    int msum=0;
    for(i=0;i<n;i++)
    {
       csum+=a[i];
       if(csum>msum)
       {
           msum=csum;
       }
       if(csum<0)
       { 
           csum=0;
       }
    }
    cout<<msum;
return 0;
}