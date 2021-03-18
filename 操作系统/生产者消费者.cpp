#include <bits/stdc++.h>
using namespace std;
int apple = 0;
int plate = 1;
mutex lk;
int main(){

    thread c1 = thread([](){
        while (1){
            lock_guard<mutex> lg(lk);
            if(apple){
                apple--;
                plate++;
                cout<<"t1 eat one"<<endl;
            }
        }
    });
    thread c2 = thread([](){
        while (1){
            lock_guard<mutex> lg(lk);
            if(apple){
                apple--;
                plate++;
                cout<<"t2 eat one"<<endl;
            }
        }
    });
    thread p1 = thread([](){
        while (1){
            lock_guard<mutex> lg(lk);
            if(plate){
                apple++;
                plate--;
                cout<<"p1 produce one"<<endl;
            }
        }
    });
    p1.join();
}