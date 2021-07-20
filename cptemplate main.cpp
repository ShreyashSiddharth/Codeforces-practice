#include<bits/stdc++.h>
#include<iostream>
#define ll long long



using namespace std;

int sumofn(int n){
    if(n == 1){
        return 1;

    }
    else{
        n + sumofn(n-1);
    }


}





int main()
{
cout<<sumofn(3);
}












