#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int flag=num;
    int remainder;
    int x=0;
    int sum=0;
    char b=(int) 9;
   while(num!=0)
   {
    remainder=num%10;
    sum+=pow(remainder,3);
    x=x*10+remainder;
    num=num/10;
   }
   if(flag==sum){
       cout<<"Amstrong";
   }
   else
   { 
       cout<<"Not a amstrong";
   }
   
    return 0;
}
