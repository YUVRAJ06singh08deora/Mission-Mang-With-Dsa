#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    int remainder;
    int x=0;
    int sum=0;
   while(num!=0)
   {
    remainder=num%10;
    
    x=x*10+remainder;
    num=num/10;
   }
  
    cout<<x<<endl;
    return 0;
}
