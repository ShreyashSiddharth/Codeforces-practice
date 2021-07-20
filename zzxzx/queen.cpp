#include "queen.h"
#include <iostream>
using namespace std;

queen::queen()
{
    cout<<"this is constructor";
}
void queen::moveit(){
    cout<<"i like to move it ";

}
queen::~queen(){
    cout<<"bye";
}
void queen::moveit2() const{
cout<<"constant function";
}
