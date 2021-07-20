#include <iostream>
#include<string>
using namespace std;

int main(){
   int n;
   int x = 0;
   cin>>n;
   for (int i = 0;i<n;i++){
    string y;
    cin>>y;
    if (y == "x++"){
        x++;
    }
    else if (y == "x--"){
        x--;
    }
   }
cout<<x;
}

