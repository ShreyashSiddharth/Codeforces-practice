#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(), ::tolower);
    transform(b.begin(),b.end(), ::tolower);
    if(a> b){
        cout<<"first string is greater";
    }
    else if(a == b){
        cout<<"both are equal";
    }
    else{
        cout<<"second string is greater";
    }
}

