#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(num==2){
            cout<<"Prime";
            break;
        }
        if(num%i==0){
            cout<<"not  prime \n";
            break;
        }
        else
        { 
            cout<<"no. is prime";
            break;
        }
    }
   
    return 0;
}
