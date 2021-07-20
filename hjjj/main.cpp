#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,t,a,b,m,n,count_apple = 0,count_orange = 0;
    vector <int > house_dist;
    cin>>s,t;
    cin>>a,b;
    cin>>m,n;

    int apple[m],orange[n];
    for(int i = s;i<=t;i++){
        house_dist.push_back(i);
    }
    for(int j = 0; j<m;j++){
        cin>>apple[j];
        a+=apple[j];
       if(binary_search(house_dist.begin(),house_dist.end(),a)){
        count_apple++;
       }
    }
    for(int k = 0; k<n;k++){
        cin>>orange[k];
        b+=orange[k];
        if(binary_search(house_dist.begin(),house_dist.end(),b)){
        count_orange++;
    }


}
}
