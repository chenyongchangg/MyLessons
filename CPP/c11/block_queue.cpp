#include <iostream>
#include <bits/stdc++.h>

using namespace std;
mutex lk;
condition_variable cv;
bool isReady = false;
void print(int i){
    unique_lock<mutex> uniqueLock(lk);
    if(!isReady)
        cv.wait(uniqueLock);
    cout<<i<<endl;
}
void go(){
    lock_guard<mutex> lockGuard(lk);
    isReady = !isReady;
    cv.notify_all();

}
int main() {
    thread threads[10];
    for(int i = 0; i < 10; i++){
        threads[i] = thread(print, i);
    }
    go();
    for(auto &i:threads) i.join();




}
