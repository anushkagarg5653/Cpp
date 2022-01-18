#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //// Method 1  ////
    // string n;
    // cin>>n;
    ///// method 2 ////
    // cout<<n;
    // string str1(5,'a');
    // cout<<str1<<endl;

    // TO input sentence //

    // string str;
    // getline(cin,str);
    // cout<<str<<endl;

    // Append function
    // Method 1 //
    // string s1 = "fam";
    // string s2 = "ily";

    //s1.append(s2);
     //cout<<s1<<endl;

    // Method 2
    // cout<<s1+s2<<endl;

    // Access string char //

    // string s1 = "Anu";
    // string s2 = "shka";

    // cout<<s1[2]<<endl;

    // clear function //

    // string anu = "anushka garg";
    // anu.clear();
    // cout<<anu;

    // compare 2 strings ////

    // string s1 = "Anu";
    // string s2 = "shka";

    // if(s1.compare(s2)==0){
    //     cout<<"Strings are equal";}
    // if(!s1.compare(s2)==0){
    //     cout<<"Strings are not equal"<<endl;}
    // cout<<s2.compare(s1)<<endl;
    

    // Empty function //

    // string s1 = "anu";
    // cout<<s1<<endl;

    // s1.clear();

    // if(s1.empty())
    //     cout<<"String is empty";
    // if(!s1.empty())
    //     cout<<"String is not empty";


    // Erase /////
    // string s1 = "nincompoop";
    // s1.erase(3,2); // index, no. of char
    // cout<<s1<<endl;

    //FIND function //
    // string s1 = "nincompoop";
    // cout<<s1.find("com")<<endl;


    // Insert function //
    // string s1 = "ANu";
    // s1.insert(2,"lol"); // index. string to be inserted
    // cout<<s1;

    // Length ///
    // string s1 = "nincompoop";
    // cout<<s1.size()<<endl; // or .length

    ////////////////////////////////////////

    // string s1 = "nincompoop";
    // for(int i=0; i<s1.length(); i++){
    //     cout<<s1[i]<<endl;
    // }

    /////////////////////////////////////////

    // Substring

    // string s1 = "Anushka";
    // string s = s1.substr(2,5);
    // cout<<s;
   
   // string to int
//    string s1 = "897";
//    int x = stoi(s1);
//    cout<<x+2<<endl;

    // int to string
    // int a = 11;
    // cout<<to_string(a) + "2" <<endl;

    // sort a string
    string s = "hdsakansbdhak";
    sort(s.begin(), s.end());
    cout<<s<<endl;

    return 0;
}