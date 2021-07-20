#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a,b;
    string c;
    cin>>n;
    map <string,int>m;
    for(int i = 0;i<n;i++){
        cin>>a;if(a == 1){cin>>c,b;m.insert(make_pair(c,b));}
        else if(a == 2){cin>>c; m.erase(c);}
        else if(a == 3){cin>>c;
            map<string,int>::iterator itr=m.find(c);
            if(itr->second >100){cout<<"0"<<endl;}
            else{cout<<itr->second<<endl;}
        }
    }
}








