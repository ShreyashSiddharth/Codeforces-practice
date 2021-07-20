#include <iostream>

using namespace std;

int main()
{
long long n,m,a;
cin  >> n >> m >>a;
long long area_var1,area_var2;
if(n % a > 0){
    area_var1 = ((n/a)+1);
}
else{
    area_var1 = n/a;
}
if(m % a > 0){
    area_var2 = ((m/a)+1);
}
else{
    area_var2 = m/a;
}
cout<<area_var1*area_var2;
}
