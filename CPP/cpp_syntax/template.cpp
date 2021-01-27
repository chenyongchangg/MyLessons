#include <iostream>
//#include <string>
#include <vector>
using namespace std;
class A{
    int a = 4;
};
template<typename T>
T get_max(T a, T b){
    return a>b?a:b;
}

template<typename T>
class B{
private:
    vector<T> stack;
public:
    void push(T a){
        stack.push_back(a);
    }
    T pop(){
        return stack.back();
    }
};

int main(){
    string a = "sadfsadf";
    B<string> b;
    b.push(a);
    cout<<b.pop()<<endl;
}