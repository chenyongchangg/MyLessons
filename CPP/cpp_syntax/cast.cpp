#include <iostream>
#include <memory>
using namespace std;

int main(){
    const int a= 3;
    int &b = const_cast<int&>(a);
    b = 39;
    cout<<a<<endl;
    int *c = const_cast<int*>(&a);
    *c = 123;
    cout<<a<<endl;
    
}