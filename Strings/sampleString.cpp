#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s="Hello Yuvraj And welcome to this world";
    // cout<<s;
    // string s1(5,'h');
    // cout<<s1<<endl;
    // string s1;
    // getline(cin,s1);
    // cout<<s1; 
    

    // Appending in Strings
    // string s1="Yuvraj";
    // string s2="Singh";
    // s1.append(s2); 
    // cout<<s1+s2;

    // Accessing the characters from strings
    // cout<<s1[0];

    // Using the clear function to clear
    // string abc=" sdjbfkdj sdfsdf sdfsdfsd";
    // abc.clear();
    // cout<<abc;

    // Comparision of two string
    // string s1="abc";
    // string s2="abc";
    // cout<<s2.compare(s1);
   
    // To check if string is empty_
    // string s1="Hii my name is yuvraj Singh deora";
    // s1.clear();
    // if(s1.empty())
    // { 
    //     cout<<"String is empty";
    // }
   
   // to find anything from given string

//    string s1="Yuvraj";
//    cout<<s1.find("raj");

// Inserting the strings
// string s1="Yuvraj";
// s1.insert(5," Singh");
// cout<<s1;

// To find the size 

// string s1="Yuvraj";
// cout<<s1.size();

// To iterate the string values
// string s1="Yuvraj";
// for(int i=0;i<s1.length();i++)
// {  
// cout<<s1[i]<<endl; 

// }

// Find the substring
// string s1="yuvrajsinghdeora";
// string substr=s1.substr(6,5);
// cout<<substr;

// Converting to the integer representation

// string s1="765";
// int x=stoi(s1);
// cout<<x+10 ;
    
// converting int to strings
// int x=344;
// string s1=to_string(x);
// cout<<s1; 


// sorting string;
string s1="sdfdgdgiouehriueahwkldkaj";
sort(s1.begin(),s1.end()); 
cout<<s1;
    return 0;
}

