#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,s,n) for(ll i=s;i<n;i++)


int main(){

string s;
cin>>s;
for(int i = 0;s.size();i++){
    if(s[i]=='.'){
        cout<<0;
        continue;
    }
    if(s[i]=='-'&&s[i+1]=='.'){
        cout<<1;
        i++;
        continue;
    }
    if(s[i]=='-'&&s[i+1]=='-'){
         cout<<2;
         i++;
    }
}
}
