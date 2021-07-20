#include <iostream>

using namespace std;

int main()
{
int w,k,n;
cin>>k>>n>>w;
int cost = 0;
for(int i = 1;i<=w;i++){
	cost+=i*k;
}
if(cost - n < 0){return 0;}
else{cout<<cost-n;}
}