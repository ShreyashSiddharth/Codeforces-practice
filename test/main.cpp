#include <iostream>'
#include<string>

using namespace std;

int main()
{
    string s;
    int n = 0;
    cin>>s;
    for (int i = 0;i<100;i++){
        for(int j = 1;j,100;j++){
            if (s[i] == s[j]){n++;}
        }
    }
    cout<<n;
}
