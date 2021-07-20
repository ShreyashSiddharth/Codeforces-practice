#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
	//code test goes here
	int a;
	cin>>a;
	for(int i = 0 ;i<sqrt(a);i++){
		if(a%i == 0){
			cout<<"Not prime";
		}
        else{
		cout<<"Prime";
	}
	}

	}
