#include<iostream>
#include<math.h>
using namespace std;
void fact(int n)
{
    int result=n;
for(int i=1;i<n;i++){
result*=(n-i);
}
cout<<result<<endl;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    fact(n);
    return 0;
}