#include <iostream>
#define maxsize 10
#include <stdlib.h>

using namespace std;

class TimeTable{


public:int length ;
    int table[maxsize] = {0};
    TimeTable(){
        length=0;
    }
    int input(int a){
        if(length>=10) {
            cout<<"溢出";
            exit(0);
        }

        for(int i=length;i>=0;i--){
            table[i]=table[i-1];
        }
        table[0]=a;
        length++;

    }
    int inser(int pos,int value){
        if(pos>length){
            cout<<"you cannt";
            return 0;
        }
        for(int i=length;i>=pos;i--){
            table[i]=table[i-1];
        }
        table[pos-1]=value;
        length++;

    }
    int dele(int a){
        if(a>length){
            cout<<"no you cannit";
            return 0;
        }
        for(int i=a-1;i<=length;i++){
            table[i]=table[i+1];
        }
        length--;
    }

    int sear(int a){
        int i;
        for( i=0;i<length;i++){
            if (a==table[i]) break;
        }

        if(i==length+1)
        {
            return 0;
        }


        else return i+1;
    }

};
int main()
{
    TimeTable time ;

    int n;
     cout<<"顺序表创建成功，你要输入几位数字呢？"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int isn;
        cin>>isn;
        time.input(isn);
    }
    cout<<"输入完毕"<<endl;

    cout<<"输入你要插入的位置和值?"<<endl;
    int in;
    int value;
    cin>>in>>value;
    time.inser(in,value);

    cout<<"输入你要删除的值?"<<endl;
    cin>>in;
    time.dele(in);
    

    cout<<"输入你要寻找的值?"<<endl;
    cin>>in;
    cout<<time.sear(in);






}