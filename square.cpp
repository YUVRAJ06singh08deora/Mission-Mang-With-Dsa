#include<iostream>
using namespace std;
int main(){
    int row ,column;
    cout<<"Enter the no. of rows";
    cin>>row;
    cout<<"Enter the number of columns";
    cin>>column;
    for(int i=0;i<row;i++){{
        for(int j=0;j<column;j++){
           cout<<"*";
        }
        cout<<"\n";
        cout<<"The number to be printed is "
    }}
    return 0;
}
