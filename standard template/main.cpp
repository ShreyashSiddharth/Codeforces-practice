#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    int y[a];
    for (int x=0;x<a;x++){
        int q;
        cin>>q;
        y[x]=q;
    }
    int u=0;
    for (int i=3-1;i>=0;i--){
        if (u==1){
            break;
        }
        for (int j=0;j<i;j++){
            if (y[i]<y[j]){
                int a=y[i];
                y[i]=y[j];
                y[j]=a;

                if (y[j]>y[j+1]){
                    u++;
                    cout<<u<<"\n";
                    break;
                }else{
                    cout<<"yes";
                }
            }
        }
    }
    if (u==1){
        cout<<"no";
    }else if (y==0){
        cout<<"yes";
    }
    return 0;
}
