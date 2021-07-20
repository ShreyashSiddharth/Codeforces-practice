#include <iostream>
#include<string>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    for(int j = n;i>j;j--){
        cout<<""<<endl;
    }
    for(int k =1 ; k<i; k++){
        cout<<"*"<<endl;
    }
  }//for rows i to  n
}
