#include <iostream>

using namespace std;

int main()
{
   char a[] = "aaman";
   for(int i = 1;i<sizeof(a)/sizeof(a[0]);i++)
    char b[] =(toupper(a[0]))+ a[i];
   cout<<b;
}
