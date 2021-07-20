#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d;
    vector < int > v;
    cin>>n;
    for(int i = 0;i < n;i++){
      cin>>a;
      v.push_back(a);
    }
    cin>>b;
    cin>>c>>d;
    v.erase(v.begin()+b-1);
    v.erase(v.begin()+c-1,v.begin()+d-1);
    int new_size = v.size();
    cout<<new_size<<endl;
    for(int j =0;j <v.size();j++){
        cout<<v[j]<<" ";

    }




}
