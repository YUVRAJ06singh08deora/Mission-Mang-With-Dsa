#include<iostream>
using namespace std;
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
    for(i=0;i<m;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Found";
        }
    }
    return 0;
}