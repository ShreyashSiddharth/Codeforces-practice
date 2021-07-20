#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1 = 0;
    string x;
    for (int i = 0;i<n;i++){
        cin>>x;
        if (x[1] =='+'){
            count1++;
        }
        else{count1--;}

    }
    cout<<count1;
}












