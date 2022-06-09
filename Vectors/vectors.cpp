#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    } // 123
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }// 123 
    
    for(auto element:v){
        cout<<element<<endl;
    }
    v.pop_back(); // 1 2
    vector<int> v2 (3,50);
    // 50 50 50
    // swap(v,v2);
    // cout<<"v elements";
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    //  cout<<"v2 elements";
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<endl;
    // }

    // Sorting Vectors
    v.push_back(5);
    v.push_back(6);
    sort(v.begin(),v.end());
  cout<<"v elements";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
    return 0;
}