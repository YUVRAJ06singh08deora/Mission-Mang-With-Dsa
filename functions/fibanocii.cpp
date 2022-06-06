// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int num=10;
//     int n[10];
//     n[0]=0;
//     n[1]=1;
//     for(int i=2;i<num;i++){
//         n[i]=n[i-1]+n[i-2];
//     }
//     for(int i=0;i<num;i++)
//     {
//       cout<<n[i]<<endl;
      
//     }
//     return 0;
// }
// Without array 
#include<iostream>
#include<math.h>
using namespace std;
void fib(int n)
{
int t1=0;
int t2=1;
int next;
for(int i=0;i<2;i++){
    cout<<i<<endl;
}
for(int i=0;i<n;i++)
{
    next=t1+t2;
    t1=t2;
    t2=next;
    cout<<next<<endl;
}
}
int main(){
    int n;
    cout<<"enter the range upto u want fibanocii"<<endl;
    cin>>n;
    fib(n);
    return 0;
}