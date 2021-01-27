#include <iostream>
#include <string>
using namespace std;

auto test(){
    int a = 3;
    return a;
}


int main(){
    decltype(test()) t = 3;
}