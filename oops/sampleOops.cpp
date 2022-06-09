#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void print()
    {
        cout<<name<<" "<<gender<<" "<<age;
    }
};
int main()
{
    student a;
    a.name="yuvrajsinghdeora";
    a.print();
    return 0;
}