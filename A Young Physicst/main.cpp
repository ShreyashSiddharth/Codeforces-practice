#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int>x ;
    vector <int> y;
    vector <int>z;
    int x_sum =0,y_sum = 0,z_sum = 0;
    int a,b,c;
    for (int i=0;i<n;i++){
        cin>>a>>b>>c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
    }
    if (x_sum == 0 && y_sum == 0 && z_sum == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}






